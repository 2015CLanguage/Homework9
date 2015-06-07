#include"stdio.h"
strcmp(char *p1,char *p2);
void main()
{
	int m;
	char str1[20],str2[20],*p1,*p2;
	printf("输入两个字符串\n");
	scanf("%s",str1);
	scanf("%s",str2);
	p1=&str1[0];
	p2=&str2[0];
	m=strcmp(p1,p2);
	printf("结果是:%d\n",m);

}
strcmp(char *p1,char *p2)
{
	int i;
	i=0;
	while(*(p1+i)==*(p2+i))
		if(*(p1+i++)=='\0') return(0);
	return(*(p1+i)-*(p2+i));
}
