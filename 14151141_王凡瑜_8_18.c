#include<stdio.h>

void main()
{
	int month;
	char *eng[12]={"January","February","March","April","May",
		"June","July","August","September","October","November","December"};
	printf("Please input the month.\n");
	scanf("%d",&month);
	printf("It refers to %s in English.\n",*(eng+month-1));
}
