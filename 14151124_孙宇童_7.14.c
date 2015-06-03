# include<stdio.h>
# define N 10
# define M 5
float score[N][M];
float a_stu[N],a_cour[M];
int r,c;
float s_var();
void input_stu();
void aver_stu();
void aver_cour();
float highest();

void input_stu(void)//输入10个学生的成绩函数
{
	int i,j;
	for(i=0;i<N;i++)
	{
		printf("请输入第%d名学生的成绩：\n",i+1);
		for(j=0;j<M;j++)
			scanf("%f",&score[i][j]);
	}
}

void aver_stu(void)//计算10个学生的平均成绩函数
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

void aver_cour(void)//计算5门课的平均分函数
{
	int i,j;
	float s;
	for(j=0;j<M;j++)
	{
		for(i=0,s=0;i<N;i++)
			s=s+score[i][j];
			a_cour[j]=s/10.0;
	}

}


float highest()//计算最高分
{
	float high;
	int i,j;
	high=score[0][0];
	for(i=0;i<N;i++)
	for(j=0;j<M;j++)
		if(score[i][j]>high)
		{r=i+1;
		 c=j+1;
		}
		return(high);
}

float s_var(void)//计算方差
{
	int i;
	float sumx,sumxn;
	sumx=0.0;
	sumxn=0.0;
		for(i=0;i<N;i++)
		{
			sumx+=a_stu[i]*a_stu[i];
			sumxn+=a_stu[i];
		}
		return(sumx/N-(sumxn/N)*(sumxn/N));
}
int main(void)
{
	int i,j;
	float h;
	input_stu();
	
	aver_stu();
	
	aver_cour();

	for(i=0;i<N;i++)
		{
			printf("第%d名学生的平均成绩为：%8.2f",a_stu[i]);
		}
	for(j=0;i<M;j++)
		{
			printf("第%d门课程的平均成绩为：%8.2f",a_cour[j]);
		}

	h=highest();
	printf("最高分数是学生%d在课程%d中所取得的%8.2f分\n",r,c,h);

	printf("方差为%8.2f",s_var());

	return 0;

