#include<stdio.h>
int strcmp(char *p1,char *p2);
int main()
{
	char a[100],b[100];
	int x;
	printf("请输入第一个字符串:");
	scanf("%s",a);
	printf("请输入第二个字符串:");
	scanf("%s",b);
	x=strcmp(a,b);
	printf("%d\n",x);
	return 0;
}
int strcmp(char *p1,char *p2)
{
	int i=0,x;
	for(i=0;*(p1+i)!='\0';i++)
	{
		if(*(p1+i)==*(p2+i))
			x=0;
		else
		{
			x=*(p1+i)-*(p2+i);
			break;
		}
	}
	return x;
}
