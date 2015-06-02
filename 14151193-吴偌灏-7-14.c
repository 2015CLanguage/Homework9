#include<stdio.h>
void main()
{
	int a[10][5],i,j,max=0,s=0,c=0;
	static float da=0.0,f=0.0;
	for(i=0;i<10;i++)
	{
		for(j=0;j<5;j++)scanf("%d",&a[i][j]);
	}
	for(i=0;i<10;i++)
	{
		int sum=0;float aver;
		for(j=0;j<5;j++)
		{
			sum=sum+a[i][j];
		}
		aver=sum/5.0;
		f=f+aver;
		printf("The average grade of student %d is %5.1f\n",i+1,aver);
	}
	for(j=0;j<5;j++)
	{
		int sum=0;float aver;
		for(i=0;i<10;i++)
		{
			sum=sum+a[i][j];
		}
		aver=sum/10.0;
		printf("The average grade of course %d is %5.1f\n",j+1,aver);
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<5;j++)
		{
			if(max<a[i][j]){max=a[i][j];s=i;c=j;}
		}
	}	
		printf("The highest grade of student %d and course %d is %d\n",s+1,c+1,max);	
	for(i=0;i<10;i++)
	{
		int sum=0;float aver;
		for(j=0;j<5;j++)
		{
			sum=sum+a[i][j];
		}
		aver=sum/5.0;
		da=da+aver*aver-f*f/100;
	}
	printf("%5.3f\n",da/10);
}
