class base
{
	public:
		base()
		{
			cout<<"base class constructer"<<endl;
		}
		virtual ~base()
		{
			cout<<"base class destructer"<<endl;
		}
};


class der : public base
{
	public:
		der()
		{
			cout<<"der class constructer"<<endl;
		}
		~der()
		{
			cout<<"der class destructer"<<endl;
		}
};

int main()
{
	base* b =new der();
	delete b;
}


