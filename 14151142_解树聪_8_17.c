#include<string.h>
char str1[100], str2[100];
int strcmp(char *p1, char *p2)
{
	int a, i;
	a = strlen(str1);
	for (i = 0; i<a; i++)
	{
		if (*p1 == *p2)
		{
			p1++;
			p2++;
		}
	}
	return (*p1 - *p2);
}
int main()
{

	printf("str1:");
	gets(str1);
	printf("str2:");
	gets(str2);
	printf("结果为: %d\n", strcmp(str1, str2));
	return 0;
}
