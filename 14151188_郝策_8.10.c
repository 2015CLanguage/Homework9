#include"stdio.h"
#define N 5
int fun(int a[N][N]);
int a[N][N],max,min;
int main()
{
	printf("N=%d\n",N);
	int i,j;
	for(i=0;i<N;i++)
	{
		printf("输入第%d行\n",i+1);
		for(j=0;j<N;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	fun(a);
	printf("新的矩阵为：\n");
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
			printf("%-6d",a[i][j]);
		putchar('\n');
	}	
	
}

int fun(int a[N][N])
{
	int i,j,max,min,p,q;   
	max=a[0][0];             //求最大值 
	p=0;q=0;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(max<a[i][j])
			{
				max=a[i][j];
				p=i;q=j;
			}
		}
	}
	a[p][q]=a[N/2][N/2];
	a[N/2][N/2]=max;
	
	min=a[0][0];
	p=0;q=0;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(min>a[i][j])
			{
				min=a[i][j];
				p=i;q=j;
			}
		}
	}
	a[p][q]=a[0][0];
	a[0][0]=min;
	
	min=a[0][1];
	p=0;q=1;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(a[i][j]>a[0][0]&&a[i][j]<min)
			{
				min=a[i][j];
				p=i;q=j;
			}
		}
	}
	a[p][q]=a[0][N-1];
	a[0][N-1]=min;	
	
	min=a[0][1];
	p=0;q=1;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(a[i][j]>a[0][N-1]&&a[i][j]<min)
			{
				min=a[i][j];
				p=i;q=j;
			}
		}
	}
	a[p][q]=a[N-1][0];
	a[N-1][0]=min;
	
	
	min=a[0][1];
	p=0;q=1;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(a[i][j]>a[N-1][0]&&a[i][j]<min)
			{
				min=a[i][j];
				p=i;q=j;
			}
		}
	}
	a[p][q]=a[N-1][N-1];
	a[N-1][N-1]=min;
}
