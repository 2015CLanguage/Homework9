#include<stdio.h>
void input_stu(void);
void aver_stu(void);
void aver_cour(void);
float highest();
float s_var(void);
#define N 10
#define M 5
float score[N][M];
float a_stu[N],a_cour[M];
int r,c;
int main()
{
	int i,j;
	float h;
	input_stu();
	aver_stu();
	aver_cour();
	printf("NO.	课程1	课程2	课程3	课程4	课程5	平均\n");
	for(i=0;i<N;i++)
	{
		printf("\n NO %2d",i+1);
		for(j=0;j<M;j++)
			printf("%8.2f",score[i][j]);
		printf("%8.2f\n",a_stu[i]);
	}
	printf("\naverage:");
	for(j=0;j<M;j++)
		printf("%8.2f",a_cour[j]);
	printf("\n");
	h=highest();
	printf("最高分:%7.2f NO.%2d course %2d\n",h,r,c);
	printf("平均分方差:%8.2f\n",s_var());
	return 0;
}
void input_stu(void)
{
	int i,j;
	for(i=0;i<N;i++)
	{
		printf("请输入学生的成绩%2d:\n",i+1);
		for(j=0;j<M;j++)
			scanf("%f",&score[i][j]);
	}
}
void aver_stu(void)
{
	int i,j;
	float s;
	for(i=0;i<N;i++)
	{
		for(j=0,s=0;j<M;j++)
			s=s+score[i][j];
		a_stu[i]=s/5.0;
	}
}
void aver_cour(void)
{
	int i,j;
	float s;
	for(j=0;j<M;j++)
	{
		s=0;
		for(i=0;i<N;i++)
			s=s+score[i][j];
		a_cour[j]=s/(float)N;
	}
}
float highest()
{
	float high;
	int i,j;
	high=score[0][0];
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			if(score[i][j]>high)
			{
				high=score[i][j];
				r=i+1;
				c=j+1;
			}
		}
	}
	return(high);
}
float s_var(void)
{
	int i;
	float sumx,sumxn;
	sumx=0.0;
	sumxn=0.0;
	for(i=0;i<N;i++)
	{
		sumx=sumx+a_stu[i]*a_stu[i];
		sumxn=sumxn+a_stu[i];
	}
	return(sumx/N-(sumxn/N)*(sumxn/N));
}
