#include<stdio.h>
#include<string.h>
int main()
{
	int strcmp(char *p1, char *p2), a, c, d;
	char *p1, *p2;
	char s1[100], s2[100];
	printf("请输入两个字符串：\n");
	gets_s(s1);
	gets_s(s2);
	p1 = &s1[0];
	p2 = &s2[0];
	a = strcmp(p1, p2);
	d = strlen(s1);
	if (d = a + 1)
		c = 0;
	else
		c=(*(p1 + a) - *(p2 + a));
	printf("返回值为：%d\n", c);
	return 0;
}

int strcmp(char *p1, char *p2)
{
	int i = 0, b = 0;
	char s1[100];
	while (*(p1 + i) != '\0')
	{
		if (*(p1 + i) == *(p2 + i))
			b = i;
		printf("%d", b);
		i++;
	}
	return(b);
}
