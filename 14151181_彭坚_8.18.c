#include<stdio.h>
#include<string.h>
int main()
{
	char *x[12] = { "january", "february", "march", "april", "may", "june", "july", "auguest", "september", "october", "november", "december" };
	int i;
	printf("请输入月份的阿拉伯数字：\n");
	scanf_s("%d", &i);
	printf("%s\n", *(x + i-1));
	return 0;
}
