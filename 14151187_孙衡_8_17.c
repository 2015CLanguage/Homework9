#include<stdio.h>
#include<string.h>
int strcmp(char *p1,char *p2);
int main()
{
	char s1[100],s2[100];
	printf("请输入第一个字符串：");
	gets(s1);
	printf("请输入第二个字符串：");
	gets(s2);
	printf("经过比较的返回值为：%d",strcmp(s1,s2));
	return 0;
}
int strcmp(char *p1,char *p2)
{
	int flag=0;
	while(*p1!='\0'||*p2!='\0')
	{
		if(*p1!=*p2)
		{
			flag=1;
			return *p1-*p2;
			break;
		}
		p1++;
		p2++;
	}
	if(flag=0)
	{
		return 0;
	}
}

