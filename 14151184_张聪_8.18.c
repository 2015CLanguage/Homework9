#include<stdio.h>
int main()
{
	char *month[13]={"illegal","Jannuary","February","March","April","May","June","July","August","September","October","November","December"};
	int n;
	printf("input month:\n");
	scanf("%d",&n);
	if((n<=12)&&(n>=1))
		printf("it is %s.\n",*(month+n));
	else
		printf("it is %s.\n",*month);
	return 0;
}
