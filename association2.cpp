#include<iostream>
using namespace std;

class Passport;

class Person
{
	public:
		string name;
		Passport *passport;
		Person(string name) : name(name),passport(nullptr){}
};

class Passport
{
	public:
		string number;
		Person *person;
		Passport(string number) : number(number),person(nullptr){}
};

int main()
{
	Person person1("Prakash");
	Passport passport1("123456789");

	person1.passport=&passport1;
	passport1.person=&person1;

	cout<<person1.name<<" 's passport number is "<<person1.passport->number<<endl;
	cout<<passport1.number<<" belongs to "<<passport1.person->name<<endl;

	return 0;
}

