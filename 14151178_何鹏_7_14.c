#include "stdio.h"
void student(float a[10][5]);
void course(float a[10][5]);
void search(float a[10][5]);
void variance(float a[10][5]);
void main()
{
	float sco[10][5];
	int i,j;
	for(i=0;i<10;i++)
	{
		printf("请输入第%d个学生的成绩",i+1);
		for(j=0;j<5;j++)
		{
			scanf("%f",&sco[i][j]);
		}
	}
	student(sco);
	course(sco);
	search(sco);
	variance(sco);
}
void student(float a[10][5])
{
	int i,j;
	float ave,sum;
	for(i=0;i<10;i++)
	{
		sum=0;
		for(j=0;j<5;j++)
		{
			sum=sum+a[i][j];
		}
		ave=sum/5;
		printf("第%d个同学的平均分为:%5.2f\n",i+1,ave);
	}
	printf("\n");
}
void course(float a[10][5])
{
	int i,j;
	float ave,sum;
	for(j=0;j<5;j++)
	{
		sum=0;
		for(i=0;i<10;i++)
		{
			sum=sum+a[i][j];
		}
		ave=sum/10;
		printf("第%d个科目的平均分为:%5.2f\n",j+1,ave);
	}
	printf("\n");
}
void search(float a[10][5])
{
	float max=a[0][0];
	int i,j,m=0,n=0;
	for(i=0;i<10;i++)
	{
		for(j=0;j<5;j++)
			if(a[i][j]>max)
			{
				max=a[i][j];
				m=i+1,n=j+1;
			}
	}
	printf("50个分数中最高分数为：%5.2f\n为第%d个学生第%d门课\n\n",max,m,n);
}
void variance(float a[10][5])
{
	float sum1,sum2=0,sum3=0,ave[10];
	double var;
	int i,j;
	for(i=0;i<10;i++)
	{
		sum1=0;
		for(j=0;j<5;j++)
		{
			sum1+=a[i][j];
		}
		ave[i]=sum1/5;
	}
	for(i=0;i<10;i++)
	{
		sum2+=ave[i];
		sum3+=ave[i]*ave[i];
	}
	var=1.0/10*sum3-(sum2/10)*(sum2/10);
	printf("平均分方差为：%5.2f\n",var);
}
