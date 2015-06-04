#include <stdio.h>
#define N 10
#define M 5
float shuzu[N][M];
float s_xuesheng[N],s_kecheng[M];
int r,c;
int main()
{
	int i,j;
	float h;
	void input_xuesheng(void);
	void pingjun_x(void);
	void pingjun_k(void);
    float zuigao();
	float fangcha(void);
	input_xuesheng();
    pingjun_x();
	pingjun_k();
	printf("\n学生号   1     2     3     4     5   平均分\n");
    for(i=0;i<N;i++)
	{
		printf("\n%3d",i+1   );
		for(j=0;j<M;j++)
			printf("%6.2f",shuzu[i][j]);
		printf("%6.2f",s_xuesheng[i]);
	}
	printf("\n课程平均成绩:");
	for(j=0;j<M;j++)
        printf("%6.2f",s_kecheng[j]);
	printf("\n");
	h=zuigao();
	printf("最高分:%6.2f   学生号%2d   课程号%2d\n",h,r,c);
	printf("方差为%6.2f\n",fangcha());
	return 0;
}
void input_xuesheng(void)
{
	int i,j;
	for(i=0;i<N;i++)
	{
	printf("第%d个学生的成绩分别为:\n",i+1);
	for(j=0;j<M;j++)
		scanf("%f",&shuzu[i][j]);
	}
}
void pingjun_x(void)
{
	int i,j;
	float s;
	for(i=0;i<N;i++)
	{
		s=0;
		for(j=0;j<M;j++)
			s=s+shuzu[i][j];
		s_xuesheng[i]=s/(float)M;
	}
}
void pingjun_k(void)
{
	int i,j;
	float s;
	for(j=0;j<M;j++)
	{
		s=0;
		for(i=0;i<N;i++)
			s=s+shuzu[i][j];
		s_kecheng[j]=s/(float)N;
	}
}
float zuigao()
{
	float high;
	int i,j;
	high=shuzu[0][0];
	for(i=0;i<N;i++)
		for(j=0;j<M;j++)
			if(shuzu[i][j]>high)
			{
				high=shuzu[i][j];
				r=i+1;
				c=j+1;
			}
	return high;
}
float fangcha(void)
{
	int i;
	float sum2,sum;
	sum2=0.0;
	sum=0.0;
	for(i=0;i<N;i++)
	{
		sum2+=(s_xuesheng[i])*(s_xuesheng[i]);
		sum+=s_xuesheng[i];
	}
	return(sum2/N-(sum/N)*(sum/N));
}
