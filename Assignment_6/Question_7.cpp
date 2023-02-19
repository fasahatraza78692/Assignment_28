#include<iostream>
using namespace std;
class Integer
{
   int a;
     public:
	   Integer(int a):a(a)
       { }
	 int operator!()
	  {
	  	return -a;
	  }
	 void Display()
	  {
	  	cout<<a<<endl;
	  }
};
int main()
{
	Integer i1(5);
	i1.Display();
	cout<<!i1;
	return 0;
}
