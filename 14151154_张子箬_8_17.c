#include<stdio.h>
char str1[50],str2[50],*p1,*p2;
int main()
{
	int cmp(char *p1,char *p2);
	int x;
	printf("输入两字符串：\n");
	scanf("%s",&str1);
	scanf("%s",&str2);
	p1=&str1[0];
	p2=&str2[0];
	x=cmp(p1,p2);
	printf("%d\n",x);
	return 0;
}

int cmp(char *p1,char *p2)
{
	int i;
	p1=&str1[0];
	p2=&str2[0];
	for(i=0;i<50;i++)
	{while(*(p1+i)==*(p2+i))
			if(*(p1+i++)=='\0')return 0;
			return(*(p1+i)-*(p2+i));}
}
