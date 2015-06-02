#include<stdio.h>
int strcmp(char *p1,char *p2);
int main()
{
	int m;
	char s1[30],s2[30];
	printf("请输入第一个字符串\n");
	gets(s1);
	printf("\n");
	printf("请输入第二个字符串\n");
	gets(s2);
	m=strcmp(s1,s2);
    printf("result:%d\n",m);
    return 0;
}
int strcmp(char *p1,char *p2)
{
	int i=0;
	while(*(p1+i)==*(p2+i))
		if(*(p1+i++)=='\0')
			return 0;
		return(*(p1+i)-*(p2+i));
}
