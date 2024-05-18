#include<iostream>
#include<vector>	
using namespace std;

class jjjj {
	int i;
};
typedef jjjj j;
int main0(void)
{
	vector<int> v(10, 1);
	j a{};
	return 0;
}
int main00001(void)
{

	return 0;
}
int main0x394(void)
{
	double prices[5] = { 1.0,2.0,3.0,4.0,5.0 };
	for (double x : prices)
	{
		cout << x << endl;
	}
	
	return 0;
}
#include<fstream>
#include<sstream>
int main0x(void)
{
	cerr << "hello" << endl;
	return 0;
}
#include<string>
constexpr int cst = 10;
int main06(void)
{
	int a = 0;
	constexpr int* p = nullptr;
	//p = &a;
	const int& b = 10;
	void* p1 = &a;//take up the room
	string kun(6, 'j');//ikun
	cout << kun << endl;
	cout << kun.size() << endl;
	cout << sizeof(kun) << endl;
	string kun0 = "cccccc";
	cout << sizeof(kun0) << endl;
	string s1{}, s2{};
	cin >> s1; //>> s2;
	cout << s1 << endl;//cout << s2 << endl;
	return 0;
}
int main07(void)
{
	string line;
	while (getline(cin, line))
	{
		if(!line.empty())
		{ 
			cout << line << endl;
		}
	}
	auto len = line.size();
	cout << typeid(len).name()<< endl;
	return 0;
}
#include<cctype>
int main(void)
{

	return 0;
}