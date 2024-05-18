#include<stdexcept>
#include<iostream>
using namespace std;
int main02(void)
{
	auto a = 0;
	auto b = 0.6;
	auto c = 1.6666666;
	cout << typeid(a).name() << endl;
	cout << typeid(b).name() << endl;
	cout << typeid(c).name() << endl;
	return 0;
}