#include<iostream>
#include<string>
#include<string.h>
using namespace std;
void search(char list[][20], int n, char name[])
{
	for (int i = 0; i < n; i++)
	{
		if (strcmp(list[i],name)==0)
		{
			cout <<"yes£¡" << endl;
			break;
		}
		if (i == n-1 )
		{
			cout << "no result!" << endl;
		}
	}
}
int main05(void)
{
	char list[][20] = {"è¡½ã","»¬¸ç","»Û","×ù»ú"};
	char name[20] = {"ÄãºÃ"};
	cin >> name;
	int size;
	size = sizeof(list) / sizeof(list[0]);
	search(list, size, name);
	return 0;
}