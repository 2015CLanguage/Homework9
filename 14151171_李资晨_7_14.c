#include<stdio.h>
#define N 10
#define M 5
float score[N][M];
float a_stud[N],a_class[M];
int a,b;
int main()
{
	int i,j;
	float h;
	float s_var(void);
	float highest();
	void input_stud(void);
	void aver_stud(void);
	void aver_class(void);
	input_stud();
	aver_stud();
	aver_class();
	printf("\n no. class1 class2 class3 class4 class5 aver\n");
	for(i=0;i<N;i++)
	{printf("\n no %2",i+1);
	for(j=1;j<M;j++)
		printf("%8.2f",score[i][j]);
	printf("%8.2f\n",a_stud[i]);
	}
	printf("\naverage:");
	for(j=0;j<M;j++)
		printf("%8.2f",a_class[j]);
	printf("\n");
	h=highest();
	printf("higst:%8.2f no. %2d class %2d\n",h,a,b);
	printf("variance %8.2f\n",s_var());
	return 0;
}
void input_stud(void)
{
	int i,j;
	for(i=0;i<N;i++)
	{
		printf("\ninput the score of students%2d:\n",i+1);
		for(j=0;j<M;j++)
		scanf("%f",&score[i][j]);
	}
}



void aver_stud(void)
{
	int i,j;
	float s;
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
			s+=score[i][j];
		a_stud[i]=s/5.0;
	}
}
void aver_class(void)
{
	int i,j;
    float s;
    for(j=0;j<M;j++)
	{s=0;
	for(i=0;i<N;i++)
		s+=score[i][j];
	a_class[j]=s/(float)N;
	}
}
float highest()
{
	float high;
    int i,j;
    high=score[0][0];
    for(i=0;i<N;i++)
		for(j=0;j<M;j++)
			if(score[i][j]>high)
			{
				high=score[i][j];
			    a=i+1;
				b=j+1;
			}
			return (high);
}

float s_var(void)
{
	int i,j;
	float sumx,sumxn;
	sumx=0.0;
	sumxn=0.0;
	for(i=0;i<N;i++)
	{
		sumx+=a_stud[i]*a_stud[i];
		sumxn+=a_stud[i];
	}
	return (sumx/N-(sumxn/N)*(sumxn/N));
}
