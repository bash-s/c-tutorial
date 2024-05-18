#include<iostream>	
#include<string>
#include<fstream>
#include<stdexcept>
using namespace std;
int main08(void)
{
	fstream ofs{};
	ofs.open("test.txt", ios::out);
	//ofs << "ÎÒ°®Äã" << endl;
	//ofs << "Ïþ»Û" << endl;
	ofs << "hello world" << endl;
	ofs << "Life is short,I need python" << endl;
	ofs.close();
	fstream ifs{};
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		return -1;
	}
	string str{};
	while (ifs >> str)
	{
		cout << str << endl;
	}
	char test[1000]{};
	while (ifs.getline(test, 1000))
	{
		cout << test << endl;
	}
	string test1{};
	while (getline(ifs, test1))
	{
		cout << test1 << endl;
	}
	char c{};
	while ((c = ifs.get()) != EOF)
	{
		cout << c ;
	}
	ifs.close();
	return 0;
}