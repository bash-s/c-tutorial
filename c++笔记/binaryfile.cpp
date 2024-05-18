#include<iostream>
#include<fstream>
#include<stdexcept>
#include<string>
#include<string.h>
using namespace std;
class Base
{
public:
	int age;
	char arr[6];
};
int main09(void)
{
	Base base = { 66,"hello" };
	ofstream ofs{};
	ofs.open("test1.txt", ios::out | ios::binary);
	ofs.write((const char*)(&base), sizeof(Base));
	ofs.close();
	ifstream ifs{};
	Base b{};
	ifs.open("test1.txt", ios::in | ios::binary);
	ifs.read((char*)(&b), sizeof(Base));
	ifs.close();
	cout << b.age << b.arr << endl;
	return 0;
}