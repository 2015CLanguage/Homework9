#include<stdio.h>
int strcmp(char * p1,char * p2);
int main()
{
	char s1[80],s2[80];
	printf("请输入两个字符串:\n");
	gets(s1);
	gets(s2);
	printf("%d",strcmp(s1,s2));
	return 0;
}
int strcmp(char * p1,char * p2)
{
	int i,flag;
	for(i=0;* (p1+i)!='\0';i++)
	{
		if(* (p1+i)==* (p2+i))
		{
			flag=1;
		}
		else
		{
			flag=0;
            return * (p1+i)-* (p2+i);
		}
	}
	if(flag==1)
	{
		return 0;
	}
}
