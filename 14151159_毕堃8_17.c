#include<stdio.h>
int main()
{
	int m;
	char s1[40],s2[40],*p1,*p2;
	printf("请输入两个字符串\n");
	scanf("%s",s1);
	scanf("%s",s2);
	p1=&s1[0];
	p2=&s2[0];
	m=strcmp(p1,p2);
	printf("结果是:%d",m);
	printf("\n");
	return 0;
}

strcmp(char *p1,char *p2)
{
	int i=0;
	while(*(p1+i)==*(p2+i))
		if(*(p1+i++)=='\0')
			return 0;
		return(*(p1+i)-*(p2+i));
			
}
