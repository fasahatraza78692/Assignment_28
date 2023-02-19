#include<iostream>
using namespace std;
class Complex
{
	int a,b;
	  public:
	  void setData(int a,int b)
	   {
	   	 this->a=a;
	   	 this->b=b;
	   }
	   void Display()
	    {
	    	cout<<a<<"+"<<b<<"i"<<endl;
		}
	   Complex operator=(Complex c)
	    {
	    	a=c.a;
	    	b=c.b;
	    	return c;
		}
};
int main()
{
	Complex c1,c2,c3,c4;
	c1.setData(3,7);
	c3=c2=c1;
	c1.Display();
	c2.Display();
	c3.Display();
	return 0;
}
