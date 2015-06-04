#include<stdio.h>
void main()
{
	void strcmp(char *p1, char *p2);
	char s1[50], s2[50], *p1, *p2;
	printf("输入第一个字符串:");
	gets(s1);
	printf("输入第二个字符串:");
	gets(s2);
	p1 = s1; p2 = s2;
	strcmp(p1, p2);
}
void strcmp(char *p1, char *p2)
{
	int i;
	i = 0;
	for (i = 0; i < 50; i++)
	{
		if (*(p1 + i) != *(p2 + i))
		{
			printf("结果:%d\n", *(p1 + i) - *(p2 + i));
			break;
		}
		else if (*(p1 + i) == '\0')
		{
			printf("结果:0\n");
		}
	}
}
