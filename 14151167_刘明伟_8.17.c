Enter file contents here
# include <stdio.h>
int main()
{
	int strcmp(char *p1, char *p2);
	char a[50], b[50], *p1, *p2;
	int i, m, j;
	printf("请输入一段字符：\n");
	gets_s(a);
	printf("请再输入一段字符：\n");
	gets_s(b);
	p1 = &a[0];
	p2 = &b[0];
	m=strcmp(p1, p2);
	printf("%d", m);
	return 0;
}
 int strcmp(char *p1, char *p2)
{
	int i;
	i = 0;
	while (*(p1 + i) == *(p2 + i))
		if (*(p1 + i++) == '\0')
			return (0);
	return(*(p1 + i) - *(p2 + i));

}
