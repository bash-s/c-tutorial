#include<iostream>
#include"class.hpp"
using namespace std;
int main01(void)
{
	First f;
	f.first();
	return 0;
}
int main02(void)
{
	double a, b, c;
	cin >> a >> b >> c;
	try
	{
		while (a > 0 && b > 0 && c > 0)
		{
			cout << triangle(a, b, c) << endl;
			cin >> a >> b >> c;
		}
	}
	catch (double)
	{
		cout << "error" << endl;
	}
	return 0;
}
int main03()
{
	//"a",'a'���ͣ��洢�ռ䲻ͬ
	//��Ӹ�\0,ASCII��Ϊ0
	//cout << sizeof("a") << endl;
	//cout << sizeof('a') << endl;
	int i = 1, j = 2;
	int a = (i + 1, j - 1);
	//cout << a << endl;
	//cout << (5 > 2 > 7 > 8) << endl;
	//��������
	//&& || �������� ����������
	//sizeof�Ǹ������ ��������
	//��Ŀ>˫Ŀ>��Ŀ
	//��>��>�߼�
	//��һ���� �� =
	cout << 10 + 'a' << endl;
	
	return 0;
}
int main04(void)
{
	char str[] = {'h','e','\0','l','\0'};
	char str1[] = { 'h','e','\n','l','\0' };
	char* s = str;
	char* s1 = str1;
	cout << s << endl;
	cout << str1 << endl;
	return 0;
}