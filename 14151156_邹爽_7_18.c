#include<stdio.h>
int main()
{
	int x,y,z,a=0;
	int day(int x, int y, int z);
	scanf("%d %d %d",&x,&y,&z);
	a=day(x,y,z);
	if(x%100!=0)
	{
		if(x%4==0)
			 a=a++;
		else a=a;
	}
	else 
	{
		if(x%400==0)
			a=a++;
		else a=a;
	}
	printf("%d\n",a);
	return 0;
}

int day(int x, int y, int z)
{
	int m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int i,a=z;
	for(i=1;i<y;i++)
		a=a+m[i];
	return(a);
}
