#include<stdio.h>
int main()
{
	void fun1(float a[10][5]);
	void fun2(float a[10][5]);
	void fun3(float a[10][5]);
	void fun4(float a[10][5]);
	float a[10][5];
	int i,j;
	for(i=0;i<10;i++)
	{
		printf("输入第%d个学生的成绩：",i+1);
		for(j=0;j<5;j++)
			scanf("%f",&a[i][j]);
	}
	fun1(a);
	printf("\n");
	fun2(a);
	printf("\n");
	fun3(a);
	printf("\n");
	fun4(a);
	return 0;
}

void fun1(float a[10][5])
{
	int i,j;
	float score,n;
	for(i=0;i<10;i++)
	{
		score=0;
		for(j=0;j<5;j++)
			score=score+a[i][j];
		n=score/5;
		printf("第%d个学生的平均分是：%4.2f\n",i+1,n);
	}
}


void fun2(float a[10][5])
{
	int i,j;
	float score,n;
	for(j=0;j<5;j++)
	{
		score=0;
		for(i=0;i<10;i++)
			score=score+a[i][j];
		n=score/10;
		printf("第%d门课的平均分是：%4.2f\n",j+1,n);
	}
}


void fun3(float a[10][5])
{
	int i=0,j,n=0,m=0;
	float max;
	max=a[0][0];
	while(i<10)
	{
		for(j=0;j<5;j++)
		{
			if(a[i][j]>max)
			{max=a[i][j];n=i;m=j;}
		}
		i++;
	}
	printf("最高分：%4.2f\n学生号：%d\n课程号：%d\n",max,n+1,m+1);
}


void fun4(float a[10][5])
{
	int i,j;
	float score,n,b[10],t=0,k=0,x;
	for(i=0;i<10;i++)
	{
		score=0;
		for(j=0;j<5;j++)
			score=score+a[i][j];
		n=score/5;
		b[i]=n;
	}
	for(i=0;i<10;i++)
		t=t+b[i]*b[i];
	for(i=0;i<10;i++)
		k=k+b[i];
	x=t/10-(k/10)*(k/10);
	printf("平均分方差：%4.2f\n",x);
}
