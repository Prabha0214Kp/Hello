#include<iostream>
using namespace std;

class student
{
	public:
		string name;
		student(string name) : name(name){}
};

class teacher
{
	public:
		string name;
		teacher(string name) : name(name){}

		void teach(student &s)
		{
			cout<<name<<" is teaching "<<s.name<<endl;
		}
};

int main()
{
	student s("Prakash");
	teacher t("mr.sharma");
	t.teach(s);
	return 0;
}

