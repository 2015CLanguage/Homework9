#include<stdio.h>
int strcmp(char *x1,char *x2);
int main()
{
	char s1[20],s2[20],* p1,* p2;
	int m;
	printf("请输入字符串1：\n");
	scanf("%s",&s1);
	printf("请输入字符串2：\n");
	scanf("%s",&s2);
	p1=&s1[0];
	p2=&s2[0];
	m=strcmp(p1,p2);
	printf("结果为：%d\n",m);
	return 0;
}

int strcmp(char *x1,char *x2)
{
	int i=0;
	while(*(x1+i)==*(x2+i))
		{if(*(x1+i)=='\0')
			return 0;
		 else
			 i++;}
	return (*(x1+i)-*(x2+i));
}
