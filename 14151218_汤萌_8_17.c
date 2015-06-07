#include<stdio.h>

int main()
{
	char s1[20], s2[20], *p1, *p2;
	printf("请输入字符串s1：\n");
	scanf("%s", s1);
	printf("请输入字符串s2：\n");
	scanf("%s", s2);
	p1 = s1;
	p2 = s2;
	printf("结果为：%d\n", strcmp(p1, p2));
	return 0;
}
int strcmp(char *p1, char *p2)
{
	int i;
	for (i = 0; *(p1 + i) != '\0' && *(p2 + i) != '\0'; i++)
	{
		if (*(p1 + i) == *(p2 + i))
		  continue;
		else
		  return (*p1 - *p2);
	}
}
