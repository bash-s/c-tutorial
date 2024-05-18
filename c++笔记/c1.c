#include<stdio.h>
#include<stdlib.h>
#include"1.h"
int f()
{
	static int i = 1;
	i *= 2;
	return i;
}
int main02(void)
{
	int r = 0;
	for (int i = 0; i < 2; i++)
	{
		r += f();
	}
	printf("%d",r);
	return 0;
}
//file is based on stdio.h
int main01(void)
{
	FILE* f = fopen("test.txt", "r");
	if (f == NULL)
	{
		printf("error");
		return -1;
	}
	char ch = 0;
	ch=fgetc(f);
	printf("%c\n", ch);
	char ch0 = 0;
	ch0 = fgetc(f);
	printf("%c\n", ch0);
	fclose(f);
	return 0;
}
int main03(void)
{
	int a = 4, b = 5, c = 0, d;
	d = !a && !b || !c;
	printf("%d\n", d);
	return 0;
}
int main04()
{
	int a = 0, b = 5;
	++a || ++b;
	printf("%d %d %d", a, b, a + b);
	return 0;

}
int main05()
{
	for (int i = 0; i < 4; i++, i++)
		for (int k = 1; k < 3; k++)
			printf("*");
	return 0;

}
int main06()
{
	int c = 0, k;
	for (k = 1; k < 3; k++)
	{
		switch (k)
		{
		case 2:
			c++;
			break;
		case 4:
			c += 2;
			break;
		default:
			c += k;
		}

	}
	printf("%d\n", c);
	return 0;

}
int main07()
{
	int a = 1, b = 7;
	do
	{
		b = b / 2;
		a +=b;
	} while (b > 1);
	printf("%d", a);
	return 0;

}
int main08()
{
	int i = 11;
	switch (i)
	{
	case 9:
		i += 1;
	case 10:
		i += 2;
	case 11:
		i += 3;
	default:
		i += 4;
	}
	printf("%d\n", i);
	return 0;

}
int main09()
{
	int n = 12345;
	int d;
	while (n != 0)
	{
		d = n % 10;
		printf("%d", d);
		n /=10;
	}
	return 0;

}
int main10()
{
	int i, n = 0;
	for (i = 1; i <= 200; i++)
	{
		if (n < 10)
		{
			if (i%2==1&&i%3!=0)
			{
				printf("%5d\n", i);
				n++;
			}
		}
	}
	return 0;

}
int main11()
{
	int i = 10, j = 0;
	do
	{
		j += 1;
		i--;
	} while (i > 2);
	printf("%d\n", j);
	return 0;

}
int main12()
{
	int  n=0,z=0;
	int m = (n = z);
	int b = 1, c = 2;
	int x = (b + 1, c + 3);
	printf("%d\n", x);
	printf("%-m.nd\n");
	printf("%*d\n",3,x );
	return 0;
} 
int main13()
{
	recursion(1);
	return 0;
}
void recursion(int n)
{
	printf("level %d locationn %p\n", n, &n);
	if (n < 4)
	{
		recursion(n + 1);
	}
	printf("LEVEL %d location %p\n", n, &n);
}
//recursion is useful for inverting order
int main14()
{
	unsigned long n;
	while (scanf_s("%lu", &n) == 1)
	{
		to_binary(n);
	}
	return 0;
}
void to_binary(unsigned long n)
{
	int r;
	r = n % 2;
	if (n >= 2)
	{
		to_binary(n / 2);
	}
	printf("%d",r);//inverted order
	return;
}
int main15()
{
	double height,m ;

	printf("please input the data\n");
	scanf_s("%lf %lf", &height, &m);
	printf("%lf", m / height * height);

	return 0;
}
