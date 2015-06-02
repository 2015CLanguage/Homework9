#include<stdio.h>
#define N 10
#define M 5
int main()
{
	void print(float (*p)[M+1]);
	void aver1(float (*p)[M+1]);
	void aver2(float (*p)[M+1]);
        void max(float (*p)[M+1]);
	void variance(float (*p)[M+1]);
	float score[N+1][M+1];
	print(score);
	aver1(score);
	aver2(score);
	max(score);
	variance(score);
	return 0;
}
void print(float (*p)[M+1])
{
	int i,j;
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			scanf("%f",*(p+i)+j);
		}
	}
}
void aver1(float (*p)[M+1])
{
	int i,j;
	float sum,aver;
	for(i=0;i<N;i++)
	{
		aver=sum=0;
		for(j=0;j<M;j++)
		{
			sum+=*(*(p+i)+j);
		}
		aver=sum/M;
        *(*(p+i)+M)=aver;
	}
	for(i=0;i<N;i++)
	{
        printf("第%d名学生平均分为：%f\n",i+1,*(*(p+i)+M));
	}
}
void aver2(float (*p)[M+1])
{
	int i,j;
	float sum,aver;
	for(j=0;j<M;j++)
	{
		sum=aver=0;
		for(i=0;i<N;i++)
		{
			sum+=*(*(p+i)+j);
		}
		aver=sum/N;
		*(*(p+N)+j)=aver;
	}
	for(j=0;j<M;j++)
	{
        printf("第%d门课程平均分为：%f\n",j+1,*(*(p+N)+j));
	}
}
void max(float (*p)[M+1])
{
    int i,j,r,c;
	r=c=0;
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			if((*(*(p+i)+j))>(*(*(p+r)+c)))
			{
				r=i;
				c=j;
			}
		}
	}
	printf("最高分数的是第%d名学生，第%d门课程，分数：%f\n",r+1,c+1,*(*(p+r)+c));
}
void variance(float (*p)[M+1])
{
	int i;
	float s1,s2,va;
	s1=s2=0;
	for(i=0;i<N;i++)
	{
		s1+=(*(*(p+i)+M))*(*(*(p+i)+M));
		s2+=(*(*(p+i)+M))*(*(*(p+i)+M))/N/N;
	}
	va=s1/N+s2;
	printf("平均分方差为:%f\n",va);
}
