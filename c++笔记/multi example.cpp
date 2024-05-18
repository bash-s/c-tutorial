#include<iostream>
using namespace std;
class Base
{
public:
	virtual void pourwater() = 0;
};
class coffe:public Base
{
public:
	virtual void pourwater()
	{
		cout << "water" << endl;
	}
};
void dowork(Base *base)
{
	base->pourwater();
}
int main05(void)
{
	coffe* c = new coffe;
	dowork(c);
	return 0;
}