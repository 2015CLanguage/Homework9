#include<stdio.h>
void strcmp(char *,char *);
void main()
{
	int m;
	printf("please input the two month:");
	scanf("%d",&m);
    char *p[12]={"January","February","March","April","May","June","July","September","October","November","December"};
	if((m>0)&&(m<13))
		printf("%s",*(p+m-1));
	else printf("wrong");
}
