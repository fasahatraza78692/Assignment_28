#include<iostream>
using namespace std;
class Complex
{
	int a,b;
	  public:
		friend ostream& operator<<(ostream&,Complex);
		friend istream& operator>>(istream&,Complex&);
};
ostream& operator<<(ostream &os, Complex c)
 {
 	cout<<c.a<<"+"<<c.b<<"i";
 	return cout;
 }
istream& operator>>(istream &is, Complex &c)
 {
 	cout<<"Enter Real & imaginary part : ";
 	cin>>c.a>>c.b;
 	return cin;
 }
 int main()
 {
 	Complex c1,c2,c3;
 	cin>>c1>>c2>>c3;
 	cout<<c1<<" "<<c2<<" "<<c3;
   return 0;
 }
