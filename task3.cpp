#include<iostream>
#include<string.h>
using namespace std;

class a{
	public:
		int id;
		char name[100];
		int salary;
		char email[100];
		
		
		void disp()
		{
			cout<<"Empolyee's id=";
			cin>>id;
			cout<<"Empolyee's name=";
			cin>>name;
			cout<<"Empolyee's salary=";
			cin>>salary;
			cout<<"Empolyee's email=";
			cin>>email;
		}
			
		
};
class b{
	public:
		char contact[100];		
		void set1()
		{
			cout<<"Empolyee's contact=";
			cin>>contact;			
		}
		
};
class c :public a ,public b{

	public:
			
		void get()
		{
			cout<<"Empolyee's id="<<id<<endl;
			cout<<"Empolyee's name="<<name<<endl;
			cout<<"Empolyee's salary="<<salary<<endl;
			cout<<"Empolyee's email="<<email<<endl;
			cout<<"Empolyee's contact="<<contact<<endl;
		}
	
};
int main()
{
	c p;
	p.disp();
	p.set1();
	p.get();
}
