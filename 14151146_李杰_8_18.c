#include<stdio.h>
void main()
{
	char *month[13]={"illegal month","January","February","March","April","May","June","July","August",
										"September","October","November","December"};
	int n;
	printf("Please month: ");
	scanf("%d",&n);
	if((n>=1)&&(n<=12))
		printf("It is %s.\n",*(month+n));
	else
		printf("Wrong\n");
}
