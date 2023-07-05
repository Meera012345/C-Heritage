#include<iostream>
#include<string.h>
using namespace std;

class a{
	public:
		int id;
		char name[100];
		char role[100];
		int salary;
		int experience;
		char comp_name[100];
       	char address[100];
       	char email[100];
	    char contact[10];

		void set()
		{
			cout<<"Empolyee's id=";
			cin>>id;
			cout<<"Empolyee's name=";
			cin>>name;
			cout<<"Empolyee's role=";
			cin>>role;
		}
};
class b :public a{

	public:
		
		void set1()
		{
			cout<<"Empolyee's salary=";
			cin>>salary;
			cout<<"Empolyee's experience=";
			cin>>experience;
		}
		
};
class c :public b{

       public:
       	
              	void get()
       	{
       		cout<<"Empolyee's name="<<name<<endl;
       		cout<<"Empolyee's role="<<role<<endl;
       		cout<<"Empolyee's salary="<<salary<<endl;
		   }
		   void set2()
		   {
		   	cout<<"Empolyee's comp_name=";
		   	cin>>comp_name;
		   	cout<<"Empolyee's address=";
		   	cin>>address;
		   }
	};
class d :public c{

	public:
        void set3()
		{
			cout<<"Empolyee's email=";
			cin>>email;
			cout<<"Empolyee's contact=";
			cin>>contact;
		}
		void get2()
		{
			cout<<"Empolyee's id="<<id<<endl;
		   cout<<"Empolyee's experience="<<experience<<endl;
			cout<<"Empolyee's comp_name="<<comp_name<<endl;
			cout<<"Empolyee's address="<<address<<endl;			
			cout<<"Empolyee's email="<<email<<endl;
			cout<<"Empolyee's contact="<<contact<<endl;
		}
	
};

main()
{
	d o1;
	o1.set();
	o1.set1();
	o1.set2();
	o1.set3();
	o1.get();
	o1.get2();
}
