#include"stdio.h"
#define N 10
#define M 5
float a[N][M];
float ave[N];
float xp(float a[N][M], int i);
float kp(float a[N][M], int j);
void max(float a[N][M]);
void fc(float a[N][M], float ave[N]);

int main()
{
	int i,j;
	for(i=0;i<N;i++)
	{
		printf("输入第%d个学生的成绩\n",i+1); 
		for(j=0;j<M;j++)
			scanf("%f",&a[i][j]);
	}
	
	
	
	
/*	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
	}	
	*/
	
	
	printf("学生/课程    "); 
	for(i=0;i<M;i++)
	{
		printf("科目%d      ",i+1);
	}
	printf("平均分");
	printf("\n");
	for(i=0;i<N;i++)
	{
		printf("学生%d       ",i+1);
		for(j=0;j<M;j++)
		{
			printf("%5.2f      ",a[i][j]);
		}
		printf("%5.2f",xp(a,i));
		ave[i]=xp(a,i);
		printf("\n");
	}
	printf("平均分      ");
	for(j=0;j<M;j++)
	{
		printf("%5.2f      ",kp(a,j));
	} 
	printf("\n");
	max(a);
	fc(a,ave);
}

float xp(float a[N][M], int i)
{
	float sum=0,ave;
	int j;
		for(j=0;j<M;j++)
			sum=sum+a[i][j];
		ave=sum/M;
	return ave;
	
}

float kp(float a[N][M], int j)
{
	float sum=0,ave;
	int i;
	for(i=0;i<N;i++)
	{
		sum=sum+a[i][j];
	}
	ave=sum/N;
	return ave;
}


void max(float a[N][M])
{
	int i,j,p=1,q=1;
	float m=a[0][0];
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			if(m<a[i][j])
			{
				m=a[i][j];
				p=i;q=j;
			}
		} 
	}
	printf("最高分数%5.2f 是第%d位同学 的科目%d\n",m,p+1,q+1);
}

void fc(float a[N][M], float ave[N])
{
	int i;
	float sum=0,av,fangcha;
	for(i=0;i<N;i++)
	{
		sum=sum+ave[i];
	//	printf("%f\n",ave[i]);
	}
//	printf("%f\n",sum); 
	av=sum/N;
//	printf("%f\n",av);
	fangcha=(1.0/N)*av*av*(av/N)*(av/N);
	printf("平均分方差为%5.2f",fangcha);

} 

