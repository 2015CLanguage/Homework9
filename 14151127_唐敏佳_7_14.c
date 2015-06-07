#include "stdio.h"

int personal_average(int s[10][5],int i);
void subject_average(int s[10][5]);
void highest(int s[10][5]);
void average_sqrt(int s[10][5]);

//主函数
int main()
{
	int i,j,g[10][5],a;
	printf("数据处理后均取整\n\n");
	for(i=0;i<10;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("请输入第%d个学生的第%d门课的成绩：",i+1,j+1);
			scanf("%d",&g[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<10;i++)
	{
		a=personal_average(g,i);
		printf("第%d个学生的平均分为：%d",i+1,a);
		printf("\n");
	}
	printf("\n");
	subject_average(g);
	highest(g);
	average_sqrt(g);
	return 0;
}

//计算每个学生的平均分
int personal_average(int s[10][5],int i)
{
	int j,a=0;
	for(j=0;j<5;j++)
	{
		a=a+s[i][j];
	}
	a=a/5;
	return a;
}

//计算每门课的平均分
void subject_average(int s[10][5])
{
	int i,j,a=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<10;j++)
		{
			a=a+s[j][i];
		}
		a=a/10;
		printf("第%d门课的平均分为：%d",i+1,a);
		printf("\n");
	}
}

//找出最高分
void highest(int s[10][5])
{
	int a,b,c,i,j;
	a=s[0][0];
	for(i=0;i<10;i++)
	{
		for(j=0;j<5;j++)
		{
			if(s[i][j]>=a)
			{
				a=s[i][j];
				b=i;
				c=j;
			}
			
		}
	}
	printf("最高分为第%d个学生的第%d门课的成绩：%d\n",b+1,c+1,a);
}

//计算平均分方差
void average_sqrt(int s[10][5])
{
	int a[10],i,b=0,c=0,f;
	for(i=0;i<10;i++)
	{
		a[i]=personal_average(s,i);
		b=b+a[i]*a[i];
		c=c+a[i];
	}
	f=b/10-(c/10)*(c/10);
	printf("平均分方差为：%d\n",f);
}
