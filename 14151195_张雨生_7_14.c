#include<stdio.h>
#define n 10
#define m 5
float score[n][m];
float a[n],b[m];
int r,t;
int main()
{
	int i,j;
	float h;
	float var();
	float highest();
	void input();
	void aver_stu();
	void aver_sub();
	input();
	aver_stu();
	aver_sub();
	printf("\n  No:  sub1:   sub2:   sub3:   sub4:   sub5:   平均分\n");
	for(i=0;i<n;i++) 
	{
		printf("\n No%2d",i+1);
		for(j=0;j<m;j++)
			printf("%7.2df",score[i][j]);
		printf("%7.2F",a[i]);
	}
	printf("\n5门功课的平均成绩分别为:");
		for(j=0;j<5;j++)
			printf("%7.2f\n",b[j]);
		printf("\n");
		h=highest();
		printf("最高分为:%7.2f   No:%2d    subject%2d\n",h,r,t);
		printf("平均分方差为:%7.2f\n",var());
}

void input()
{
	int i,j;
	for(i=0;i<10;i++)
	{
		printf("\n请输入第%2d个学生的分数:\n",i+1);
		for(j=0;j<5;j++)
			scanf("%f",&score[i][j]);
	}
}

void aver_stu()
{
	int i,j;
	float sum;
	for(i=0;i<10;i++)
	{
		for(j=0;j<5;j++)
			sum+=score[i][j];
		a[i]=sum/5.0;
	}
}

void aver_sub()
{
	int i,j;
	float s;
	for(j=0;j<5;j++)
	{
		s=0;
		for(i=0;i<10;i++)
			s+=score[i][j];
		b[j]=s/10.0;
	}
}

float highest()
{
	float high;
	int i,j;
	high=score[0][0];
	for(i=0;i<10;i++)
		for(j=0;j<5;j++)
			if(score[i][j]>high)
			{
				high=score[i][j];
				r=i+1;
				t=j+1;
			}
			return high;
}

float var()
{
	int i;
	float sx,sn,s;
	sx=0.0;
	sn=0.0;
	s=0.0;
	for(i=0;i<10;i++)
	{
		sx+=a[i]*a[i];
		sn+=a[i];
	}
	s=sx/n-(sn/n)*(sn/n);
	return(s);
}
