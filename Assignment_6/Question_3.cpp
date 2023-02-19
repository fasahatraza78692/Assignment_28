#include<iostream>
using namespace std;
class Array
{
	int a[50];
	const int size=50;
	 public:
	 	void setArray(int n,int index)
	 	 {
	 	 	if(index>=size)
	 	 	 {
	 	 	 	cout<<"Array index out of bound"<<endl;
	 	 	 	exit(0);
		     }
		    a[index]=n;
		 }
		int operator[](int index)
		 {
		 	if(index>=size)
		 	 {
		 	 	cout<<"Array index out of bound"<<endl;
		 	 	exit(0);
			 }
			return a[index];
		 }
};
int main()
{
	Array a1;
	a1.setArray(12,50);
	cout<<a1[18];
	return 0;
}
