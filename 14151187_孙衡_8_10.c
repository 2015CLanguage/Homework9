#include<stdio.h>
void transform(int (*x)[5]);
int main()
{
	int i,j,m,n,a[5][5];
	printf("请输入一个5x5矩阵：\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	transform(a);
	printf("变换后的矩阵为：\n");
	for(m=0;m<5;m++)
	{
		for(n=0;n<5;n++)
		{
			printf("%d ",a[m][n]);
		}
		printf("\n");
	}
	return 0;
}
void transform(int (*x)[5])
{
	int i,j,max=x[0][0],flag1x=0,flag1y=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(x[i][j]>max)
			{
				max=x[i][j];
				flag1x=i;
				flag1y=j;
			}
		}
	}
	x[flag1x][flag1y]=x[2][2];
	x[2][2]=max;
	int m,n,k,flag[5][5]={0},locationx[4]={0,0,4,4},locationy[4]={0,4,0,4};
	for(m=0;m<4;m++)
	{
		int min=x[2][2],flag2x=2,flag2y=2;
		for(n=0;n<5;n++)
	    {
		    for(k=0;k<5;k++)
		    {
		    	if(flag[n][k]==0)
		    	{
		    		if(x[n][k]<min)
			        {
				        min=x[n][k];
				        flag2x=n;
				        flag2y=k;
			        }
				}
		    }
	    }
	    flag[locationx[m]][locationy[m]]=1;
	    x[flag2x][flag2y]=x[locationx[m]][locationy[m]];
	    x[locationx[m]][locationy[m]]=min;
	} 
}
