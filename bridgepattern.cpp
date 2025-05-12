#include<iostream>
using namespace std;

class printer
{
	public:
		virtual void print()=0;
};

class LegacyPrinter
{
	public:
		void printDocument()
		{
			cout<<"Legacy printer a document"<<endl;
		}
};

class printerAdapter : public printer
{
	LegacyPrinter lp;
	void print()
	{
		lp.printDocument();
	}
};

void clientCode(printer &pa)
{
	pa.print();
	cout<<"clientcode"<<endl;
}

int main()
{
	printerAdapter pa;
	clientCode(pa);

	return 0;
}











