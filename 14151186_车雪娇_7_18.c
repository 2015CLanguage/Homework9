#include<stdio.h>
int main()
{
	int number(int y,int m,int d);
	int y,m,d,n;
	scanf("%d,%d,%d",&y,&m,&d);
	n=number(y,m,d);
	printf("The number is %d\n",n);
	return 0;

}
int number(int y,int m,int d)
{	int b,c,p,n,a[13];
    a[1]=31;
	a[3]=31;
	a[5]=31;
	a[7]=31;
	a[8]=31;
	a[10]=31;
	a[12]=31;
	a[4]=30;
	a[6]=30;
	a[9]=30;
	a[11]=30;
	scanf("%d\n%d\n%d\n",&y,&m,&d);
	if ((b/4==0&&b/100!=0)||(b/400==0))
		a[2]=29;
	else a[2]=28;
	int i,sum=0;
	for(i=1;i<c;i++)
		sum=sum+a[i];
	n=sum+p;
	return n;
}

