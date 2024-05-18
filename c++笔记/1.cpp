#include<iostream>
#include<typeinfo>
#include<limits.h>
using namespace std;
int main02(void)
{
	int a = 3;
	int b = 4;
	decltype (a)c = 10;
	decltype ((b))d = a;
	cout << d << endl;
	cout << typeid(d).name() << endl;
	return 0;
}
template<typename T>  T range(int x)
{
	return T(x);
}
template<>  unsigned int  range<unsigned int>(int x)
{
	return unsigned int(x>=0&&x <= UINT_MAX? x : x > 0 ? INT_MAX : 0);
}
int test(int x)
{
	return (x>=0&&x <= 255) ? x : x > 0 ? 255 : 0;
}
int main03(void)
{
	int x;
	while (cin >> x)
	{
		cout << range<int>(x) << endl;
	}
	return 0;
}