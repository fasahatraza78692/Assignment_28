#include<iostream>
using namespace std;
class Integer
{
	int x;
	 public:
	   Integer(int x):x(x)
	   {}
	   operator int()
	    {
	    	return x;
		}
	  void Display()
	   { cout<<x<<endl; }
};
int main()
{
	Integer i1(5);
	int a=i1;
	cout<<"a = "<<a<<endl;;
	return 0;
}
