// C++ program to illustrate the use of weak_ptr

#include <iostream>
#include <memory>

using namespace std;

class Object 
{
	public:
	int data;
	
	Object(int value) : data(value)
	{
		cout << "Object created with value: " << data
			<< endl;
	}

	~Object()
	{
		cout << "Object destroyed with value: " << data
			<< endl;
	}

};

int main()
{
	shared_ptr<Object> sharedObjectA(new Object(42));

	weak_ptr<Object> weakObjectA = sharedObjectA;

	if (!weakObjectA.expired())
	{
		cout << "The value stored in sharedObjectA:"
			<< (*weakObjectA.lock()).data << endl;
	}

	sharedObjectA.reset();

	return 0;
}


