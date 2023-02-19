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
};
int main()
{
	Complex c1;
	c1.setData(2,5);
	c1.Display();
	return 0;
}
