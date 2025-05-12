#include <iostream>

class Base
{
	public:
		Base()
		{
			std::cout << "Constructor base" << std::endl;
		}

		~Base()
		{
			std::cout << "Destructor base" << std::endl;
		}

		Base& operator=(const Base& a)
		{
			std::cout << "Assignment base" << std::endl;
			return *this;
		}
};

class Derived : public Base
{
	public:
		Derived()
		{
			std::cout << "Constructor der" << std::endl;
		}

		~Derived()
		{
			std::cout << "Destructor der" << std::endl;
		}

		Derived& operator=(const Derived& a)
		{
			std::cout << "Assignment der" << std::endl;
			return *this;
		}

};

int main ( ) 
{
	Derived p,p2;
	p2 = p;
	return 0;
}



