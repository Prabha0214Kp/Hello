#include<iostream>
#include<thread>
#include<semaphore>
using namespace std;

counting_semaphore<2>sem(2);

void fun(int id)
{
	sem.acquire();
	cout<<"Thread: "<<id<<" is working";
	this_thread::sleep_for(chrono::seconds(5));
	cout<<"Thread: "<<id<<" done"<<endl;
	sem.release();
}

int main()
{
	thread th1(fun,1);
	thread th2(fun,2);
	thread th3(fun,3);
	thread th4(fun,4);

	th1.join();
	th2.join();
	th3.join();
	th4.join();

	return 0;
}







