#include<stdio.h>
int main()
{
	int n;
	char *month[12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
	printf("Please input a month number: ");
	scanf("%d", &n);
	n -= 1;
	if ((n < 0) || (n > 12))
	  printf("Wrong month number!\n");
	else
	  printf("It is %s.\n", *(month + n));
	return 0;
}
