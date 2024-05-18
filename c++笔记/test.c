#include<stdio.h>
#include<stdlib.h>
int main18(void)
{
	//switch 无 break;
	//匹配到的令牌之后全执行
	/*int x = 1, a = 0, b = 0;
	switch (x) {
	case 0:b++;
	case1:a++;
	case2:a++; b++;

	}
	printf("a=%d,b=%d\n", a, b);
	*/

	int i = 10, j = 0;

	do

	{
		j = j + 1;

		i--;

	} while (i > 2);

	printf("%d\n", j);
	return 0;
}
struct Student
{
	char name[10];
	char ID[10];
	double score;
};
typedef  struct Student student;
void get(student* s,int n)
{
	for (int i = 0; i < n; i++)
	{
		scanf_s("%lf ", &s[i].score);
		gets(s[i].ID);
		s[i].ID[9] = '\0';
		printf("3\n");
		gets(s[i].name);
		s[i].name[9] = '\0';
	}
}
void display(student* s)
{
	printf("%lf\n", s[1].score);
	printf("%lf\n", s[3].score);
}
int main24()
{
	student arr[4];
	get(arr, 4);
	display(arr);
	return 0;
}
struct staff
{
	union job
	{
		char class[10];
		char position[10];
	}pos;
	char job;
	char ID[10];
	char name[10];
};
typedef struct staff staff;
void Get(staff* s)
{
	for (int i = 0; i < 2; i++)
	{
		printf("1\n");
		gets(s[i].name);
		s[i].name[9] = '\0';
		printf("2\n");
		gets(s[i].ID);
		s[i].ID[9] = '\0';
		printf("3\n");
		scanf_s("%c", &(s[i].job));
		if (s[i].job == 't')
		{
			getchar();
			gets(s[i].pos.position);
			s[i].pos.position[9] = '\0';
		}
		if (s[i].job == 's')
		{
			getchar();
			gets(s[i].pos.class);
			s[i].pos.class[9] = '\0';
		}

	}
}
int main25()
{
	staff arr[2];
	Get(arr);
	return 0;
}
int main26()
{
	char s;
	char s1[10];
	//scanf_s("%c",&s);
	int i = 0;
	//s1[9] = '\0';
	//getchar();
	//scanf_s("%d", &i);
	//getchar();
	//for (int i = 0; i < 9; i++)
	//{
	//	scanf_s("%c", &s1[i]);
	//}
	//gets(s1);
	//s1[9] = '\0';
	//puts(s1);
	return 0;
}
int main27()
{
	FILE* in=NULL, * out=NULL;
	char ch;
	fopen_s(&in,"test.txt", "r"); 		
	fopen_s(&out, "张炳辉.txt", "w");
	while ((ch = fgetc(in)) != EOF)
	{
		fputc(ch, out);
	}
	fclose(in);
	fclose(out);
	return 0;
}
void f__()
{
	FILE* f1;
	fopen_s(&f1, "1.txt", "w");
	FILE* f2;
	fopen_s(&f2, "2.txt", "w");
	char* s1 = "hello";
	char ch;
	char ch_;
	int i = 0;
	int j = 0;
	while (ch = s1[i])
	{
		fputc(ch, f1);
		i++;
	}
	while (ch_ = s1[j])
	{
		fputc(ch_, f2);
		j++;
	}
	fclose(f1);
	fclose(f2);
	char* str = " ";
	FILE* f3;
	fopen_s(&f3, "1.txt", "a+");
	FILE* f4;
	fopen_s(&f4, "2.txt", "r");
	fgets(str, sizeof(s1), f4);
	fputs(str, sizeof(s1), f3);
}
char* sort_(char *arr)
{
	int n = sizeof(arr);
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (strcmp(arr[j],arr[j + 1])>0)
			{
				char temp;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	return arr;
}
int main()
{
	FILE* fp1, * fp2;
	char buffer[30];
	size_t bytesRead;
	fopen_s(&fp1,"1.txt", "a");
	if (fp1 == NULL) {
		perror("Error opening file 1.txt");
		return 1;
	}
	fopen_s(&fp2,"2.txt", "r");
	if (fp2 == NULL) {
		perror("Error opening file 2.txt");
		fclose(fp1);
		return 1;
	}
	while ((bytesRead = fread(buffer, 1,30, fp2)) > 0) 
	{
		fwrite(buffer, 1, bytesRead, fp1);
	}
	fclose(fp1);
	fclose(fp2); 	
	char arr[40];
	FILE* f4;
	fopen_s(&f4, "2.txt", "w");
	fread(arr, 1, 80, f4);
	char *temp = sort_(arr);
	FILE* f3;
	fopen_s(&f3, "3.txt", "w");
	fputs(temp, f3);
	return 0;
}