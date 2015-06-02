#include<stdio.h>

void lunar(int y,int *a);

void main()
{
	int y,m,d;
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31},s=0,*p;
	printf("Please input the date(Year Month Day).\n");
	scanf_s("%d %d %d",&y,&m,&d);
	lunar(y,a);
	for(p=a;p<a+m-1;p++)
		s+=*p;
	printf("It is Day %d in the year.\n",s+d);
}

void lunar(int y,int *a)
{
	if((y%4==0&&y%100!=0)||y%400==0)
		*(a+1)=29;
}
