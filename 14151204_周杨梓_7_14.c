#include<stdio.h>
void student(float a[][5],float b[],int n);
void lesson(float a[][5],float c[],int n);
void max(float a[][5],int n);
void variance(float a[][5],float b[],int n);
int main()
{
	float a[100][5],b[100],c[5];
	int n,i;
	printf("请输入学生个数:\n");
	scanf("%d",&n);
    printf("请输入每个学生的5门课成绩:\n");
	for(i=0;i<n;i++)
	{
		scanf("%f%f%f%f%f",&a[i][0],&a[i][1],&a[i][2],&a[i][3],&a[i][4]);
	}
    student(a,b,n);
	lesson(a,c,n);
	max(a,n);
	variance(a,b,n);
	return 0;
}
void student(float a[][5],float b[],int n)
{
	int i,j;
	float s;
	for(i=0;i<n;i++)
	{
		for(j=0,s=0;j<5;j++)
		{
			s=s+a[i][j];
		}
		b[i]=s/5;
	}
	for(i=0;i<n;i++)
	{
	    printf("第%d个学生的平均分为:%f\n",i+1,b[i]);
	}
}
void lesson(float a[][5],float c[],int n)
{
	int i,j;
	float s;
	for(i=0;i<5;i++)
	{
		for(j=0,s=0;j<n;j++)
		{
			s=s+a[j][i];
		}
		c[i]=s/n;
	}
	for(i=0;i<n;i++)
	{
	    printf("第%d门课的平均分为:%f\n",i+1,c[i]);
	}
}
void max(float a[][5],int n)
{
	int i,j,s,l;
	float max;
	max=a[0][0];
	for(i=0;i<n;i++)
	{
		for(j=0;j<5;j++)
		{
			if(max<a[i][j])
			{
				max=a[i][j];
				s=i+1;
				l=j+1;
			}
		}
	}
	printf("所有50个分数中最高的分数为:%f,对应的学生是第%d个，对应课程是第%d门课\n",max,s,l);
}
void variance(float a[][5],float b[],int n)
{
	int i;
	float s,s2,d;
	s=0;
	s2=0;
	for(i=0;i<n;i++)
	{
		s=s+b[i];
	}
	for(i=0;i<n;i++)
	{
		s2=s2+b[i]*b[i];
	}
	d=s2/n-(s/n)*(s/n);
	printf("平均分方差为:%f\n",d);
}
