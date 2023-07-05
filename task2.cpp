#include<iostream>
#include<string.h>
using namespace std;

class Animal
{
	
			public:
				int age;
			    char name[100];
			void set_value(int age,char name[])
			{
				this->age=age;
				strcpy(this->name,name);
			}
};
class Zebra : public Animal
{
	public:
		void disp()
		{
			cout<<"Zebra's Age="<<age<<endl;
			cout<<"Zebra's Name="<<name<<endl;
			cout<<"Zebra has 3 types."<<endl;
			cout<<"1.Mountain Zebra"<<endl;
			cout<<"2.Grevy Zebra"<<endl;
			cout<<"3.Plains Zebra"<<endl<<endl;
		}
};
class Dolphin : public Animal
{
	public:
		void show()
		{
			cout<<"Dolphin's Age="<<age<<endl;
			cout<<"Dolphin's Name="<<name<<endl;	
			cout<<"Dolphins range in size from the 1.7-metre-long."<<endl;
			cout<<"Dolphins use their conical teeth to capture fast-moving prey."<<endl<<endl;
		}
};
int main()
{
	Zebra z;
	Dolphin d;
	z.set_value(23,"Zonkey");
	z.disp();
	d.set_value(15,"Cleo");
	d.show();
	return 0;
}
