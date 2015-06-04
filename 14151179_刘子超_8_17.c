#include<stdio.h>
#include<string.h>
void strcmp(char *,char *);
void main()
{
	char s1[10],s2[10],*p1,*p2;
	printf("please input the two strings:");
	gets(s1);p1=&s1[0];
	gets(s2);p2=&s2[0];
    strcmp(p1,p2);
}
void strcmp(char *p1,char *p2)
{
	int i,x=0;
	for(i=0;i<10;i++)
	{
		if(*(p1+i)!=*(p2+i))
		{
			x=*(p1+i)-*(p2+i);
			break;
		}
	}
	printf("%d",x);
}
