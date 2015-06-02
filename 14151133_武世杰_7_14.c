#include<stdio.h>
float score[10][5];
float ave1[10],ave2[5];
int m,n;
void f1()                                 //输入函数
{
	int i,j;
	for(i=0;i<10;i++)
	{
		printf("请输入第%d位同学的成绩：",i+1);
		for(j=0;j<5;j++)
			scanf("%f",&score[i][j]);
	}
}

void f2()                                  //计算每个学生的平均分
{
	int i,j;
	float a=0.0;
	for(i=0;i<10;i++)
	{
		a=0.0;
		for(j=0;j<5;j++)
			a=a+score[i][j];
		ave1[i]=a/5.0;
	}
}

void f3()                           //计算每门课程的平均分
{
	int i,j;
	float a=0.0;
	for(j=0;j<5;j++)
	{
		a=0.0;
		for(i=0;i<10;i++)
			a=a+score[i][j];
		ave2[j]=a/10.0;
	}
}

void f4()                              //最高分对应的学生
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
			printf("第%d位同学第%d门课程获得最高分%7.2f.\n",m,n,h);
}

void f5()                             //计算平均分方差
{
	int i;
	float sum1=0.0,sum2=0.0,s=0.0;
	for(i=0;i<10;i++)
	{
		sum1=sum1+ave1[i]*ave1[i];
		sum2=sum2+ave1[i];
	}
	s=sum1/10-(sum2/10)*(sum2/10);
	printf("平均分方差为：%8.2f\n",s);
}

int main()
{
	int i,j;
	void f1();
	void f2();
	void f3();
	void f4();
	void f5();
	f1();
	f2();
	f3();
	printf("\n   NO.     cour1   cour2   cour3   cour4   cour5   aver\n");
	for(i=0;i<10;i++)
	{
		printf("\n NO.%2d",i+1);
		for(j=0;j<5;j++)
			printf("%8.2f",score[i][j]);
		printf("%8.2f\n",ave1[i]);
	}
	printf("五门课平均成绩：");
	for(j=0;j<5;j++)
		printf("%8.2f",ave2[j]);
	printf("\n");
	f4();
	f5();
	return 0;
}
