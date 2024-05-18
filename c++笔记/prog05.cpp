#include<iostream>
#include<cstdio>
using namespace std;
int sum(int arr[][4], int row)
{
	int result = 0;
	for (int j = 0; j < row; j++)
	{
		for (int m = 1; m <4; m++)
		{
			arr[j][0]+=arr[j][m] ;
		}
		result += arr[j][0];
	}
	return result;
}
int main04()
{
	int result=0;
	int table[3][4] = { {1,2,3,4},{2,3,4,5},{3,4,5,6} };
	result=sum(table, 3);
	cout << result << endl;
	return 0;
}