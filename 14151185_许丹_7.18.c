#include<stdio.h>
int main()
{
	int check(int m,int d);
	int leap(int y);
	printf("Please enter the year, month, date in order:");
	int y,m,d;
	scanf("%d",&y);
	scanf("%d",&m);
	scanf("%d",&d);
	if(leap(y)&&m>2) d=d+1; 
	printf("The date you entered is the %dth day of the year %d\n",check(m,d),y);
	return 0;

}


int check(int m, int d)
{
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},i;
	for(i=1;i<m;i++)
		{
			d=d+a[i];
		}
	return d;
}

int leap (int y)
{
	int l;
	if(((y%4==0)&&(y%100!=0))||(y%400==0)) l=1;
	else l=0;
	return l;
}
