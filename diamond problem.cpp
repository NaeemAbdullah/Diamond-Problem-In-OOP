#include<iostream>
using namespace std;

class A
{
	protected:
		int num1;
	public:
		A()
		{
			num1=0;
			cout<<"DEFAULT CTOR OF CLASS A "<<endl;
		}
		A(int n)
		{
			num1=n;
			cout<<"PARAM CTOR OF CLASS A "<<endl;
		}
		~A()
		{
			cout<<"DTOR OF CLASS A "<<endl;
		}
};
class B: virtual public A
{
	protected:
		int num2;
	public:
		B()
		{
			num2=0;
			cout<<"DEFAULT CTOR OF CLASS B"<<endl;
		}
		B(int n)
		{
			num2=n;
			cout<<"PARAM CTOR OF CLASS B "<<endl;
		}
		~B()
		{
			cout<<"DTOR OF CLASS B"<<endl;
		}
};
class C: virtual public A
{
	protected:
		int num3;
	public:
		C()
		{
			num3=0;
			cout<<"DEFAULT CTOR OF CLASS C"<<endl;
		}
		C(int n)
		{
			num3=n;
			cout<<"PARAM CTOR OF CLASS C "<<endl;
		}
		~C()
		{
			cout<<"DTOR OF CLASS C"<<endl;
		}
};
class D: virtual public B,virtual public C
{
	private:
		int num4;
	public:
		D()
		{
			num4=0;
			cout<<"DEFAULT CTOR OF CLASS D"<<endl;
		}
		D(int n)
		{
			num4=n;
			cout<<"PARAM CTOR OF CLASS D "<<endl;
		}
		~D()
		{
			cout<<"DTOR OF CLASS D"<<endl;
		}
};
int main()
{
//	C * c = new C ();
	D * d = new D ();
	delete d;
// virtual inheritance solved the diamond problem.
//if we add virtual before public then ctor of A is runing only one time.
}


