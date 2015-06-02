#include <stdio.h>
int main()
{
	int strcmp(char *p1,char *p2);
	int n;
	char a[20],b[20],*p1,*p2;
	printf("输入两个字符串:\n");
	scanf("%s",a);
	scanf("%s",b);
	p1=&a[0];p2=&b[0];
	n=strcmp(p1,p2);
	printf("%d",n);
return 0;} 

int strcmp(char *p1,char *p2)
{
	int i=0;
	while(*(p1+i)==*(p2+i))
	if(*(p1+i++)=='\0'){
	    return(0);}
	return(*(p1+i)-*(p2+i));
}
