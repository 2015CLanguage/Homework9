#include<stdio.h>
float stu_average[10];
void line(void)
{
	printf("--------------------------------------------\n");
}
void input(float *x, int y)
{
	int i;
	printf("请输入Student_%d的五门成绩：",y+1);
	for(i=0;i<5;i++)
	{
		scanf("%f",x+i);
	}
}
void  Stu_average(float (*x)[5])
{
	float aver;
	int i,j;
	for(i=0;i<10;i++)
	{
		for(j=0,aver=0;j<5;j++)
		{
			aver=aver+*(*(x+i)+j);
		}
		aver=aver/5;
		stu_average[i]=aver;
		printf("Student_%d的平均分为: %5.2f\n",i+1,aver);
	}
}
void  Sub_average(float (*x)[5])
{
	float aver;
	int i,j;
	for(j=0;j<5;j++)
	{
		for(i=0,aver=0;i<10;i++)
		{
			aver=aver+*(*(x+i)+j);
		}
		aver=aver/10;
		printf("Subject_%d的平均分为: %5.2f\n",j+1,aver);
	}
}
void find(float (*x)[5])
{
	int i,j,p,q;
	float max;
	max=*(*(x+0)+0);p=q=0;
	for(i=0;i<10;i++)
	{
		for(j=0;j<5;j++)
		{
			if(*(*(x+i)+j)>max)
			{max=*(*(x+i)+j);p=i;q=j;}
		}
	}
	printf("最高分为:%5.2f, 该学生是: Student_%d, 该课程为: Class_%d.\n",max,p+1,q+1);
}
void variance(float *x)
{
	int i;
	float a=0,b=0,variance;
	for(i=0;i<10;i++)
	{
		a=a+x[i]*x[i];
		b=b+x[i];
	}
	variance=a/10-b*b/100;
	printf("平均分方差为: %5.2f\n",variance);
}
void main()
{
	float s[10][5];
	int i;
	for(i=0;i<10;i++)
	{
		input(s[i],i);
	}
	line();
	Stu_average(s);
	line();
	Sub_average(s);
	line();
	find(s);
	line();
	variance(stu_average);
}
