#include<iostream>
#include<cstring>
using namespace std;
class student
{
	string name;
	int age;
	  public:
	  	student(string name,int age):name(name),age(age)
	  	 {
	  	 	
		 }

		void Display()
		 {
		 	cout<<"Name : "<<name<<endl;
		 	cout<<"Age  : "<<age<<endl;
		 }
};
void* operator new(size_t size)
  {
    cout<<"Overloaded New called"<<endl;
   	void *p=malloc(size);
   	return p;
  }
void operator delete(void *p)
  {
  	cout<<"Overloaded Deleted called"<<endl;
  	free(p);
  }
int main()
{
	student *s;
	s=new student("Fasahat",18);
	s->Display();
	delete s;
	return 0;
}
