#include <stdio.h>
int strcmp(char *p1,char *p2);
int main()
{
	int m;
	char s1[20],s2[20],*p1,*p2;
	printf("请输入第一串字符串:\n");
	scanf("%s",s1);
	printf("请输入第二串字符串:\n");
	scanf("%s",s2);
	p1=&s1[0];
	p2=&s2[0];
	m=strcmp(p1,p2);
	printf("两字符串的差为:%d\n",m);
	return 0;
}
int strcmp(char *p1,char *p2)
{
	int i;
	i=0;
	while(*(p1+i)==*(p2+i))
	    if(*(p1+i++)=='\0') return 0;
	return(*(p1+i)-*(p2+i));
}
