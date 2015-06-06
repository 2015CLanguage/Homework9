#include<stdio.h>
#include<math.h>
void variance(float array[10][5]);
void average1(float array[10][5]);
void average2(float array[10][5]);
void max(float array[10][5]);
int main()
{
	int i,j;
	float a[10][5];
	for(i=0;i<10;i++)
	{
		printf("请输入第%d个同学的五门课成绩：",i+1);
		for(j=0;j<5;j++)
		{
			scanf("%f",&a[i][j]);
		}
	}
	average1(a);
	average2(a);
	max(a);
	variance(a);
	return 0;
}
void average1(float array[10][5])
{
	int i,j;
	for(i=0;i<10;i++)
	{
		float average1, s=0;
		for(j=0;j<5;j++)
		{
			s=s+array[i][j];
		}
		average1=s/5.00;
		printf("第%d个学生的平均分为：%f\n",i+1,average1);
	}
}
void average2(float array[10][5])
{
	int i,j;
	for(i=0;i<5;i++)
	{
		float average2,s=0;
		for(j=0;j<10;j++)
		{
			s=s+array[j][i];
		}
		average2=s/10.0;
		printf("第%d门课的平均分为：%f\n",i+1,average2);
	}
}
void max(float array[10][5])
{
	float MAX=0;
	int i,j,m,n;
	for(i=0;i<5;i++)
	{
		for(j=0;j<10;j++)
		{
			if(array[i][j]>MAX)
			{
				MAX=array[i][j];
				m=i;
				n=j;
			}
		}
	}
	printf("第%d个学生的第%d门课程分数最高，为：%f\n",m+1,n+1,MAX);
}
void variance(float array[10][5])
{
	int i,j,k;
	for(i=0;i<10;i++)
	{
		float average1, s1=0;
		for(k=0;k<5;k++)
		{
			s1=s1+array[i][k];
		}
		average1=s1/5.00;
		float d,average3,s2=0;
		for(j=0;j<5;j++)
		{
			s2=s2+pow(array[i][j],2);
		}
		average3=s2/5.0;
		d=average3-pow(average1,2);
		printf("第%d个学生的平均分方差为：%f\n",i+1,d);
	}
}

