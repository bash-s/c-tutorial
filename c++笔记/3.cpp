#include<iostream>
using namespace std;
#include<map>
#include<vector>
int mian07(void)
{
	int c = 1;
	int& m = c;
	auto f = [&m](int a, int b)->double
		{
			return a + b+m;
		};
	//cout << f(1, 2) << endl;
	auto square = [](vector<int>arr)
		{
			
		};
	return 0;
}