#include<stdio.h>
void student(int a[][5],int b[],int n);
void lesson(int a[][5],int c[],int n);
void max(int a[][5],int n);
void variance(int a[][5],int b[],int n);
int main()
{
	int a[100][5],b[100],c[5];
	int n,i;
	printf("请输入学生个数:\n");
	scanf("%d",&n);
    printf("请输入每个学生的5门课成绩:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d%d%d",a[i][0],a[i][1],a[i][2],a[i][3],a[i][4]);
	}
    student(a,b,n);
	lesson(a,c,n);
	max(a,n);
	variance(a,b,n);
	return 0;
}
void student(int a[][5],int b[],int n)
{
	int i,j,s;
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
	    printf("第%d个学生的平均分为:%d\n",i+1,b[i]);
	}
}
void lesson(int a[][5],int c[],int n)
{
	int i,j,s;
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
	    printf("第%d门课的平均分为:%d\n",i+1,c[i]);
	}
}
void max(int a[][5],int n)
{
	int i,j,max,s,l;
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
	printf("所有50个分数中最高的分数为:%d,对应的学生是第%d个，对应课程是第%d门课\n",max,s,l);
}
void variance(int a[][5],int b[],int n)
{
	int d,i,s,s2;
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
	printf("平均分方差为:%d\n",d);
}
