#include<stdio.h>
#define N 10
#define M 5
float score[N][M];
float s[N],c[M];

int r,g;

float fc(void);
float hest();
void aver_s(void);
void aver_c(void);
void in(void);

int main()
{
	int i,j;
	float h,k;

	in();//输入
	aver_s();//求平均数
	aver_c();

	printf("\n学号  课程1   课程2   课程3   课程4   课程5   平均分\n");//输出
	for(i=0;i<N;i++)
	{
		printf("\n %2d",i+1);
		for(j=0;j<M;j++)
			printf("%8.2f",score[i][j]);
		printf("%8.2f\n",s[i]);
	}

	printf("从一至五，五门课的平均成绩是：\n");
	for(j=0;j<M;j++)
		printf("%8.2f",c[j]);
	printf("\n");


	h=hest();//求最高
	printf("最高分为：%7.2f   NO. %2d  课程%2d\n",h,r,g);

	k=fc();//求方差
	printf("方差为%8.2f\n",k);

	return 0;
}

void in(void)//定义各函数
{
	int i,j;
	for(i=0;i<N;i++)
	{
		printf("\n请输入NO.%2d的顺序成绩:\n",i+1);
		for(j=0;j<M;j++)
		scanf("%f",&score[i][j]);
	}
}

void aver_s(void)
{
	int i,j;
	float t=0;
	for(i=0;i<N;i++)
	{
		t=0;
		for(j=0;j<M;j++)
			t=t+score[i][j];
		s[i]=t/5.0;
	}
}

void aver_c(void)
{
	int i,j;
	float t;
	for(j=0;j<M;j++)
	{
		t=0;
		for(i=0;i<N;i++)
			t=t+score[i][j];
		c[j]=t/10.0;
	}
}

float hest()
{
	float h=0;
	int i,j;
	for(i=0;i<N;i++)
		for(j=0;j<M;j++)
			if(score[i][j]>h)
			{
				h=score[i][j];
				r=i+1;
				g=j+1;

			}
		return(h);
}

float fc(void)
{
	int i;
	float k;
	float sum=0.0;
	float sumn=0.0;
	for(i=0;i<N;i++)
	{
		sum=sum+(s[i]*s[i]);
		sumn=sumn+s[i];
	}
	
	k=(sum/N-(sumn/N)*(sumn/N));
	return k;
}
