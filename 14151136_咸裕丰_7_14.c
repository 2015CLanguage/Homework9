#include"stdio.h"
#define n 10
#define m 5
void aver_stu(void);
void aver_cour(void);
float highest();
float var(void);
float score[n][m];
float stu[n],cour[m];
int r,c;
int main()
{
	int i,j;
	float h,v;
	printf("请输入10个学生的5门成绩:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			scanf("%f",&score[i][j]);
	}
	aver_stu();
	for(i=0;i<n;i++)
	{
		printf("第%d个学生的平均分为:",i+1);
		printf("%5.2f\n",stu[i]);
	}
	printf("\n");
	aver_cour();
	for(j=0;j<m;j++)
	{
		printf("第%d门课的平均分为:",j+1);
		printf("%5.2f\n",cour[j]);
	}
	printf("\n");
	h=highest();
	printf("最高分数为:%5.2f 对应的学生为:第%d个 对应的课为:第%d门\n",h,r,c);
	printf("\n");
	v=var();
	printf("方差为:%5.2f\n",v);
	return 0;
}

void aver_stu(void)
{
	int i,j;
	float s;
	for(i=0;i<n;i++)
	{
		s=0;
		for(j=0;j<m;j++)
			s=s+score[i][j];
		stu[i]=s/5.0;
	}
}

void aver_cour(void)
{
	int i,j;
	float s;
	for(j=0;j<m;j++)
	{
		s=0;
		for(i=0;i<n;i++)
			s=s+score[i][j];
		cour[j]=s/n;
	}
}

float highest()
{
	float h;
	int i,j;
	h=score[0][0];
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			if(h<score[i][j])
			{
				h=score[i][j];
				r=i+1;
				c=j+1;
			}
	return h;
}

float var(void)
{
	int i;
	float x,y,z;
	x=0;y=0;
	for(i=0;i<n;i++)
	{
		x=x+stu[i]*stu[i];
		y=y+stu[i];
	}
	z=x/n-(y/n)*(y/n);
	return z;
}
