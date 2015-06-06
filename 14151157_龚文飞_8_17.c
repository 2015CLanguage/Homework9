#include "stdio.h"
int strcmp(char *p1, char *p2)
{
	int i = 0;
	while (*(p1 + i) == *(p2 + i))
	{
		if (*(p1 + i) == '\0')
			return 0;
		i++;
	}
	return(*(p1 + i) - *(p2 + i));
}
void main()
{
	int a;
	char str1[20], str2[20], *p1, *p2;
	printf("输入字符串:\n");
	scanf_s("%s", str1);
	scanf_s("%s", str2);
	p1 = str1;
	p2 = str2;
	a = strcmp(p1, p2);
	printf("结果为:%d\n", a);
}
