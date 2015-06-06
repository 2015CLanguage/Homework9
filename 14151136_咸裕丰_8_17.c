#include"stdio.h"
char f(char *p1,char *p2);
int main()
{
	int m;
	char s1[20],s2[20],*p1,*p2;
	printf("请输入两个字符串:\n");
	scanf("%S",s1);
	scanf("%S",s2);
	p1=&s1[0];
	p2=&s2[0];
	m=f(p1,p2);
	printf("结果为: %d\n",m);
	return 0;
} 

char f(char *p1,char *p2)
{
	int i;
	i=0;
	while(*(p1+i)==*(p2+i))
	    if(*(p1+i++)=='\0')
		return 0;
	return *(p1+i)-*(p2+i); 
}
