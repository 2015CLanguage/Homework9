#include<stdio.h>
void average_student(float student[10][5]);
void average_sudject(float student[10][5]);
void top(float student[10][5]);
void variance(float student[10][5]);
int main()
{
	float student[10][5];
	int i,j;
	printf("请按照提示输入10个学生5门课程的成绩。\n");
	for(i=0;i<10;i++)
	{
		printf("请输入第%d个学生的成绩，不同科目成绩之间使用空格分开:",i+1);
		for(j=0;j<5;j++)
			scanf("%f",&student[i][j]);
	}
	average_student(student);
	average_sudject(student);
	top(student);
	variance(student);
	return 0;
}
void average_student(float student[10][5])
{
	int a,b;
	float all,p;
	for(a=0;a<10;a++)
	{
		all=0.0;
		p=0.0;
		for(b=0;b<5;b++)
			all=all+student[a][b];
		p=all/5;
		printf("第%d个学生的平均分是:%.3f\n",a+1,p);
	}
}
void average_sudject(float student[10][5])
{
	int a,b;
	float p,all;
	for(b=0;b<5;b++)
	{
		all=0.0;
		p=0.0;
		for(a=0;a<10;a++)
			all=all+student[a][b];
		p=all/10;
		printf("第%d门科目的平均分是:%.3f\n",b+1,p);
	}
}
void top(float student[10][5])
{
	int a,b,m,n;
	float temp;
	temp=student[1][1];
	m=m=1;
	for(a=0;a<10;a++)
	{
		for(b=0;b<5;b++)
		{
			if(temp<student[a][b])
			{
				temp=student[a][b];
				m=a;
				n=b;
			}
		}
	}
	printf("最高分为%.3f,对应第%d个学生的第%d门科目。\n",temp,m+1,n+1);
}
void variance(float student[10][5])
{
	int a,b;
	float average[10]={0};
	float s=0.0,x=0.0,y=0.0;
	for(a=0;a<10;a++)
	{
		for(b=0;b<5;b++)
			average[a]=(average[a]*b+student[a][b])/(b+1);	
	}
	for(a=0;a<10;a++)
	{
		x=x+average[a]*average[a];
		y=y+average[a];
	}
	printf("平均分方差为%.3f\n",x/10-(y/10)*(y/10));
}
