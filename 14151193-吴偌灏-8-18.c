#include<stdio.h>
void main()
{
	char *s[12]={"January","Februray","March","April","May","June","July","August","September","Octorber","November","December"};
	int i;
	scanf("%d",&i);
	if(i>0&&i<13)printf("%s\n",*(s+i-1));
	else printf("input wrong\n");
}
