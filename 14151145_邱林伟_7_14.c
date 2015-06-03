#include<stdio.h>
void student_aver(float a[10][5]);
void court_aver(float a[10][5]);
void max(float a[10][5]);
void fangcha(float a[10][5]);
void main()
{
	float score[10][5];
	int i,j;
	for(i=0;i<10;i++)
	{
		printf("请输入学生%d的成绩:\n",i+1);
		for(j=0;j<5;j++)
		{scanf("%f",&score[i][j]);}
	}
    printf("学生的成绩:\n");
    for(i=0;i<10;i++)
	{
		for(j=0;j<5;j++)
		printf("%5.2f",score[i][j]);
		printf("\n");
	}
    printf("\n");
    student_aver(score);
    printf("\n");
	court_aver(score);
    printf("\n");
	max(score);
    printf("\n");
	fangcha(score);
    printf("\n");
}

void student_aver(float a[10][5])//求同学的平均分
{
	float sum=0,aver;
	int i,j;
	for(i=0;i<10;i++)
	{
		for(j=0;j<5;j++)
		{
		sum=sum+a[i][j];
		}
		aver=sum/5.00;
		printf("学生%d的平均分为:\n",i+1);
        printf("%5.2f\n",aver);
		sum=0;
	}
}

void court_aver(float a[10][5])//求科目的平均分
{
	float sum=0,aver;
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<10;j++)
		{
			sum=sum+a[j][i];
		}
	    aver=sum/10.00;
        printf("科目%d的平均分为:\n",i+1);
        printf("%5.2f\n",aver);
		sum=0;
	}
}

void max(float a[10][5])//求最高分和它对应的同学及科目
{
	int m,n,i,j;
	float b=a[0][0];
    for(i=0;i<10;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i][j]>b)
			{
				b=a[i][j];
		        m=i;
		        n=j;
			}
		}
	}
	printf("最高分为:%5.2f",b);
	printf("  同学%d",m+1);
	printf("  科目%d",n+1);
}

void fangcha(float a[10][5])//求方差的函数
{
	int i,j;
	float f,fa=0,fb=0,aver[10];
	for(i=0;i<10;i++)
	{float sum=0;
		for(j=0;j<5;j++)
		{sum=sum+a[i][j];}
		aver[i]=sum/5;}
	for(i=0;i<10;i++)
	{fa=fa+(aver[i])*(aver[i]);
	fb=fb+aver[i];}
	f=(fa/10)-(fb/10)*(fb/10);
	printf("方差为:%5.2f",f);
}
