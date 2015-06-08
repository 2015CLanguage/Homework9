#include<stdio.h>
void input();
void f1();
void f2();
void f3();
void f4();
float score[10][5];
float average1[10],average2[5];
int m,n;
void input()
{
	int i,j;
	for(i=0;i<10;i++)
	{
		printf("请依次输入第%d位同学的成绩:",i+1);
		for(j=0;j<5;j++)
			scanf("%f",&score[i][j]);
	}
}
void f1()
{
	int i,j;
	float a;
	for(i=0;i<10;i++)
	{
		a=0.0;
		for(j=0;j<5;j++)
			a=a+score[i][j];
		average1[i]=a/5.0;
	}
}
void f2()
{
	int i,j;
	float a=0.0;
	for(j=0;j<5;j++)
	{
		a=0.0;
		for(i=0;i<10;i++)
			a=a+score[i][j];
		average2[j]=a/10.0;
	}
}
void f3()
{
	int i,j;
	float h=score[0][0];
	for(i=0;i<10;i++)
		for(j=0;j<5;j++)
			if(score[i][j]>h)
			{
				h=score[i][j];
				m=i+1;
				n=j+1;
			}
			printf("第%d位同学第%d门课程获得最高分为%1.2f\n",m,n,h);
}
void f4()
{
	int i;
	float sum1=0.0,sum2=0.0,s=0.0;
	for(i=0;i<10;i++)
	{
		sum1=sum1+average1[i]*average1[i];
		sum2=sum2+average1[i];
	}
	s=sum1/10-(sum2/10)*(sum2/10);
	printf("成绩的平均分方差为:%1.2f\n",s);
}
int main()
{
	int i,j;
	input();
	f1();
	f2();
	printf("\n NO.        cour1     cour2     cour3     cour4     cour5     average score\n");
	for(i=0;i<10;i++)
	{
		printf("\n NO.%2d",i+1);
		for(j=0;j<5;j++)
			printf("%10.2f",score[i][j]);
		printf("%10.2f\n",average1[i]);
	}
	printf("这五门课平均成绩依次是:\n");
	for(j=0;j<5;j++)
		printf("%10.2f",average2[j]);
	printf("\n");
	f3();
	f4();
	return 0;
}
