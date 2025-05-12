#include <iostream>
#include <memory>
using namespace std;

struct B; // Forward declaration

struct A 
{
	shared_ptr<B> b_ptr;
	~A() { cout << "A destroyed\n"; }
};

struct B 
{
	weak_ptr<A> a_ptr; // Use weak_ptr here to break the cycle
	~B() { cout << "B destroyed\n"; }
};

int main() 
{
	auto a = make_shared<A>();
	auto b = make_shared<B>();

	a->b_ptr = b;      // A → B (shared)
	b->a_ptr = a;      // B → A (weak)

	return 0;
}


