#include<stdio.h>
void strcmp(char *p1,char *p2);
void main()
{
	char str1[20],str2[20],*p1,*p2;
	printf("请输入两个字符串:\n");
	scanf("%s",str1);
	scanf("%s",str2);
    p1=&str1[0];
	p2=&str2[0];
	strcmp(p1,p2);
}

void strcmp(char *p1,char *p2)
{
	int i=0;
    if(*(p1+i)==*(p2+i))
	{i=i+1;
	 if(*(p1+i)=='\0')
		 printf("结果为:0\n");
	 else
		 printf("结果为:%d\n",*(p1+i)-*(p2+i));
	}
}
