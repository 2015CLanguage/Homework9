#include<stdio.h>
int a,b;
float score [10][5];
float student[10];
double courage[5];
int main ()
{
	int i,j;
	float h,f;
	void pingjun();
	void kepingjun();
	void input();
	float fangcha();
	float highest();
	input();
	printf("输入十个学生的成绩");
	printf("          课程1    课程2    课程3    课程4    课程5");
	for(i=0;i<10;i++)
	{
		printf("student%d",i+1);
		for(j=0;j<5;j++)
			printf("%6f",score[i][j]);
	}
	pingjun();
	printf("每个学生平均成绩是\n");
	for(i=0;i<10;i++)
		printf("student%d:%f\n",i+1,student[i]);
	kepingjun();
	printf("每门科平均成绩是\n");
	for(j=0;j<5;j++)
		printf("课程%d:%f\n",j+1,courage[j]);
	f=fangcha();
		printf("方差为：%f",f);
	h=highest();
	printf("最高分：%f  学生%d   课程%d",h,a,b);
	return(0);

}

void input()
{
	int i,j;
	for(i=0;i<10;i++)
		for(j=0;j<5;j++)
		scanf("%f",&score[i][j]);
}

void pingjun()
{
	int i;
	float x;
	for (i=0;i<10;i++)
	{
		x=score[i][0]+score[i][1]+score[i][2]+score[i][3]+score[i][4];
		student[i]=x/5.0;
	}
}
void kepingjun()
{
	int j;
	float x;
	for (j=0;j<5;j++)
	{
		x=score[0][j]+score[1][j]+score[2][j]+score[3][j]+score[4][j]+score[5][j]+score[6][j]+score[7][j]+score[8][j]+score[9][j];
		courage[j]=x/10.0;
	}
}

float fangcha()
{
	float a,b,x;
	int i;
		a=0;
		b=0;
		for(i=0;i<10;i++)
		{	
			a=a+(student[i]*student[i]);
			b=b+student[i];
		}
	x=(1/10)*a-(b/10)*(b/10);
	return(x);
}

float highest()
{
	float x;
	int i,j;
	x=score[0][0];
	for(i=0;i<10;i++)
		for(j=0;j<5;j++)
			if(score[i][j]>x)
			{
				x=score[i][j];
				a=i+1;
				b=j+1;
			}
	return(x);
}

