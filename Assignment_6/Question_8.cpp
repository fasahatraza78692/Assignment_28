#include<iostream>
using namespace std;
class Coordinate
{
	int x,y,z;
	  public:
	  	Coordinate(int x,int y,int z):x(x),y(y),z(z)
	  	{ }
	  	Coordinate()
		{}
	  	void Display()
	  	 {
	  	 	cout<<"x = "<<x<<",y = "<<y<<",z = "<<z<<endl; 
	     }
	  	Coordinate operator,(Coordinate c)
	  	 {
	  	 	Coordinate temp;
	  	 	temp.x=c.x;
	  	 	temp.y=c.y;
	  	 	temp.z=c.z;
	  	 	return temp;
		 }
};
int main()
{
	Coordinate c1(2,6,9),c2(4,3,7),c3;
	c1.Display();
	c3=(c1,c2);
	c3.Display();
	return 0;
}
