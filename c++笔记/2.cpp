#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
const int NUMBER = 5;
struct node
{
	int data;
};
void set_list(int n,node*arr[])
{
	for (int i = 0; i < n; i++)
	{
		arr[i]=(node*)malloc(sizeof(node));
	}
}
void initialize(node* arr[], int i)
{
	scanf_s("%d", &((*arr[i]).data));
}
void pop(node** p)
{
	free(*p);
	*p = NULL;
}
void insert(node* arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == NULL)
		{
			arr[i] = (node*)malloc(sizeof(node));
			initialize(arr, i);
		}
	}
	
}
int main06()
{
	node* arr[NUMBER];
	set_list(NUMBER, arr);
	for (int i = 0; i < 5; i++)
	{
		initialize(arr, i);
	}
	pop(&arr[0]);
	insert(arr, NUMBER);
	return 0;
}