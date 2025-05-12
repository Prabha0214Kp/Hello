#include<iostream>
using namespace std;

class StringCopy {
	public:
		void myStrcpy(char* dest,const char* src)
		{
			while(*src)
			{
				*dest=*src;
				src++;
				dest++;
			}
			*dest='\0';
		}
};

int main()
{
	char source[]="Hello World";
	char destination[50];

	StringCopy sc;
	sc.myStrcpy(destination,source);

	cout<<"Source: "<<source<<endl;
	cout<<"Destination: "<<destination<<endl;

	return 0;
}


