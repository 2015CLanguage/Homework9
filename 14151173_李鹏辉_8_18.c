#include<stdio.h>
void main()
{ 
	char a[12][10]={"February","January","march","April","May","June","July","August","September","October","November","December"};
	int n;
	puts("please input a number:");
	scanf("%d",&n);
	printf("English is: %s\n",*(a+n-1));
}
