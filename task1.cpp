#include<iostream>
#include<string.h>
using namespace std;

class Mother
{
	public:
		void set_value()
		{
			cout<<"I Love My Daugther."<<endl;
		}
};
class Daugther : public Mother
{
	public:
		void set_value()
		{
			cout<<"I Love My Mother."<<endl;
		}
};
int main()
{
	Daugther a;
	Mother b;
	a.Daugther::set_value();
	b.set_value();
	return 0;
}
