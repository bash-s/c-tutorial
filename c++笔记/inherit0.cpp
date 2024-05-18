#include<iostream>
using namespace std;
class base1
{
public:
	int a;
	base1() :a(66)
	{}
};
class base2
{
public:
	int b;
	int a;
	base2():b(6),a(66666)
	{}
};
class son :public base1, public base2
{
public:
	son()
	{
		c = 6666;
		d = 666;
	}
	int c;
	int d;
};
int main02(void)
{
	son s{};
	//cout << sizeof(son) << endl;
	cout << s.base1::a << endl;
	cout << s.base2::a << endl;
	return 0;
}