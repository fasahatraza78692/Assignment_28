#include<iostream>
using namespace std;
class Marks
{
	int marks;
	   public:
	   	Marks(int m)
	   	{
	   		marks=m;
		}
	   	 void Display()
	   	 {
	   	 	cout<<"Marks = "<<marks<<endl;
	     }
		Marks* operator->()
		 {
		 	return this;
		 }
};
int main()
{
	Marks m1(10);
	m1.Display();
	m1->Display();
	return 0;
}
