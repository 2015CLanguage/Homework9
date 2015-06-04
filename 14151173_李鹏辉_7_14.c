#include<stdio.h>
float average1(int a[10][5],int n)
{
	int i;
	float average=0;
	for(i=0;i<5;i++)
	{
		average+=a[n][i];
	}
	average=average/5;
	return average;
}
void average2(int a[10][5])
{
	int i,j;
	float average;
	for(j=0;j<5;j++)
	{
		average=0;
		for(i=0;i<10;i++)
		{
		    average=average+a[i][j];
		}
		average=average/10;
		printf("第%d门课程的平均值是：%f\n",j+1	,average);
	}
	
}
void max(int a[10][5])
{
	int i,j,max,c=0,r=0;
	max=a[0][0];
	for(i=0;i<10;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
				c=i;
				r=j;
			}
		}
	}
	printf("最高分数是: %d ,对应的学生是 %d, 课程是 :%d\n",max,c+1,r+1);
}
float  average3(int a[10][5])
{
	int i;
	float average,s1=0,s2=0;
	for(i=0;i<10;i++)
	{
		s1=average1(a,i)*average1(a,i);
		s2=average1(a,i);
	}
	average=s1/10-s2*s2/100;
	return average;
}
void main()
{
	int a[10][5],i,j;
    puts("请输入成绩:");
	for(i=0;i<10;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	puts("成绩单是:");
	for(i=0;i<10;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<10;i++)
	{
		printf("第%d个学生的平均值是： %f\n",i+1,average1(a,i));
	}
	average2(a);
	max(a);
	printf("方差是 %f\n",average3(a));
}
