#include<stdio.h>
#include<string.h>	
void swap(int* a, int* b);
void bubble(int* arr, int n);
int main16()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	bubble(arr,10);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
int main17()
{
	char s_1[10] = {"123"};
	char s_2[10] = {"234"};
	fgets(s_1,sizeof(s_1),stdin);
	fgets(s_2,sizeof(s_2),stdin);
	strcat_s(s_1,10,s_2);
	for (int i = 0; i < 10; i++)
	{
		if (s_1[i] != '\0')
		{
			if ((i + 1) % 2 == 0)
			{
				s_1[i] = '*';
			}
		}
	}
	puts(s_1);
	return 0;
}

int main19()
{
	int a[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
	int(*p)[3] = &a[0];
	for (int i=0; i < 3; i++, p++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", (*p)[j]);
		}
		printf("\n");
	}
	return 0;
}
int main20()
{
	int a = 3, b = 4;
	swap(&a,&b);
	printf("%d ", a);
	printf("%d", b);
	return 0;
}
void swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void bubble(int* arr, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int swapped = 0;
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(&arr[j], &arr[j + 1]);
				swapped = 1;
			}
			if (!swapped)
			{
				return;
			}
		}
	}
}
void sort(int arr[],int n)
{
	bubble(arr, n);
	int odd_num = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 != 0)
		{
			swap(&arr[odd_num], &arr[i]);
			odd_num++;
		}
	}
	for (int i = 0; i < n - odd_num - 1; i++)
	{
		int swapped = 0;
		for (int j = odd_num; j < n-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(&arr[j], &arr[j + 1]);
			}
		}
		if (!swapped)
		{
			return;
		}
	}
}
int main21()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
	sort(arr,10);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
int len(char *str)
{
	char* p = str;
	int num = 0;
	while (*p!= '\0')
	{
		num++;
		++p;
	}
	return num;
}
int main22()
{
	char arr[8] = "123";
	printf("%d", len(arr));
	return 0;
}
void copy(char* s1, char* s2)
{

	while (*s1)  s1++;

	while (*s2) { *s1 = *s2; s1++, s2++; }

	*s1 = '\0';
}
int main23()
{
	char s1[5] = "12";
	char s2[3] = "34";
	copy(s1, s2);
	printf("%s", s1);
	return 0;
}