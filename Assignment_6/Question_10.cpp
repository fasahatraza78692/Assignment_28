#include<iostream>
using namespace std;
class Distance
{
   int feet,inches;
     public:
	   Distance()
	   {   }
	   Distance(int x,int y)
	   	{
	   		feet=x;
	   		inches=y;
	    }
	   operator()(int a,int b,int c)
	    {
	    	feet = a+c+5;
	    	inches = a+b+15;
		}
		void Display()
		 {
		 	cout<<"Feet = "<<feet<<endl<<"Inches = "<<inches<<endl;
		 }
};
int main()
{
	Distance d1;
	d1(3,4,5);
	d1.Display();
	return 0;
}
