#include<iostream>
using namespace std;

class myStrrchr {
	public:
		const char* Strrchr(const char* src, char ch)
		{
			const char* last=nullptr;
			while(*src)
			{
				if(*src==ch)
				{
					last=src;
				}
				src++;
			}
			return last;
		}
};

int main()
{
	const char* source="Hello World";
	char ch='o';

	myStrrchr sr;
	const char* result=sr.Strrchr(source,ch);

	if(result)
	{
		cout<<"Last occurence of "<<ch<<" is position: "<<(result-source)<<endl;
	}
	else {
		cout<<"character not found"<<endl;
	}
}


