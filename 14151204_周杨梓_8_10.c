#include<stdio.h>
void change(int a[5][5]);
int main()
{
	int a[5][5],i,j;
	printf("请输入一个5*5的矩阵:\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	 }
	 change(a);
	 printf("改变后的矩阵为:\n");
	 for(i=0;i<5;i++)
	 {
	 	for(j=0;j<5;j++)
	 	{
	 		printf("%d ",a[i][j]);
		 }
		 printf("\n");
	  } 
	  printf("\n");
	  return 0;
 }
void change(int a[5][5])
{
	int * max,* min[4],i,j,temp;
	max=a[0];
	min[0]=a[0];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i][j]>* max)
			{
				max=&a[i][j];
			}
			if(a[i][j]<* min[0])
			{
				min[0]=&a[i][j];
			}
		}
	}
	temp=a[0][0];
	a[0][0]=* min[0];
	* min[0]=temp;
	if(max==a[0])
	{
		max=min[0];
	}
	temp=a[2][2];
	a[2][2]=* max;
	* max=temp;
	min[1]=&a[0][1];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i][j]!=a[0][0] && * min[1]>a[i][j])
			{
				min[1]=&a[i][j];
			}
		}
	}
	temp=a[0][4];
	a[0][4]=* min[1];
	* min[1]=temp;
	min[2]=&a[0][1];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i][j]!=a[0][0] && a[i][j]!=a[0][4] && * min[2]>a[i][j])
			{
				min[2]=&a[i][j];
			}
		}
	}
	temp=a[4][0];
	a[4][0]=* min[2];
	* min[2]=temp;
	min[3]=&a[0][1];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i][j]!=a[0][0] && a[i][j]!=a[0][4] && a[i][j]!=a[4][0] && * min[3]>a[i][j])
			{
				min[3]=&a[i][j];
			}
		}
	}
	temp=a[4][4];
	a[4][4]=* min[3];
	* min[3]=temp;				
 } 
