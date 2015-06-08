#include<stdio.h>
int strcmp(char *p1,char *p2);
void main()
{
	char s1[50],s2[50],*p1,*p2;
	printf("请输入两个字符串\n");
	scanf("%s",&s1);
	scanf("%s",&s2);
	p1=&s1[0];
	p2=&s2[0];
	printf("结果是%d.\n",strcmp(p1,p2));
}
int strcmp(char *p1,char *p2)
{
	int i=0,n;
	while(*(p1+i)==*(p2+i))
		{
			if(*(p1+i)=='/0')
				break;
			i=i+1;	
		}
	n=*(p1+i)-*(p2+i);
	return n;
}
