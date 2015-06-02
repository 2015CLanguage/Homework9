#include <stdio.h>
float ave(int x[]);
int aves(int y[10][5]);
float highest();
float s_var(void);
int r,c;
int main()
{
	int i,j,a[10][5];
	for(i=0;i<=9;i++)
	{
		printf("请输入第%d个同学的成绩\n",i+1);
		for(j=0;j<=4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("每个人平均分分别为为%f、%f、%f、%f、%f、%f、%f、%f、%f、%f\n",ave(a[0]),ave(a[1]),ave(a[2]),ave(a[3]),ave(a[4]),ave(a[5]),ave(a[6]),ave(a[7]),ave(a[8]),ave(a[9]));
	aves(a);
	h=highest();
	printf("最高分和学号、科目为：%d",h8);
	printf("方差为：%f",s_var());
	return 0;
}

float ave(int x[])
{
	float k;
	int p;
	k=0;
	for(p=0;p<=4;p++)
	{
		k=k+x[p];
	}
	return k/5;
}

int aves(int y[10][5])
{
	printf("各科目平均分为：\n");
	int m,n;
	float sum=0;
	for(m=0;m<=4;m++)
	{
		sum=0;
		for(n=0;n<=9;n++)
		{
			sum=sum+y[n][m];
		}
		printf("%f,",sum/10);
	}
	printf("\n");
	return 0;
}

float highest()
{
	float high;
	int i,j;
	high=score[0][0];
	for(i=0;i<10;i++)
		for(j=0;j<5;j++)
			if(score[i][j]>high)
			{high=a[i][j];
			r=i+1;
			c=j+1;
			}
	return(high)
}

float s_var(void)
{
	int i;
	float sumx,sumxn;
	sumx=0.0;
	sumxn=0.0;
	for(i=0;i<N;i++)
	{sumx+=ave(i)*ave(i);
	sumxn+=ave(i);
	return (sumx/10-(sumxn/10)*(sumxn/10));
}
