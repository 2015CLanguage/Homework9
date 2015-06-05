#include<stdio.h>
#include<math.h>
int main()
{
	void avepeo(int x[][5]);
	void avesub(int x[][5]);
	void top(int x[][5]);
	void fangcha(int x[][5]);
	int i,j;
	int k[10][5];
	printf("请在下方输入学生成绩：\n");
	for(i=0;i<10;i++)
	{
		for(j=0;j<5;j++)
			scanf("%d",&k[i][j]);
	}
	avepeo(k);
	avesub(k);
	top(k);
	fangcha(k);
    return 0;
}

void avepeo(int x[][5])  //计算每个学生的平均分
{
	int i,j;
	float a=0;
	for(i=0;i<10;i++)
	{
		for(j=0;j<5;j++)
			a=a+(x[i][j]/5);
		printf("%d号学生的平均分是：%.2f\n",i+1,a);
	}
}

void avesub(int x[][5])  //计算每门课的平均分
{
	int i,j;
	float b=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<10;j++)
			b=b+(x[i][j]/10);
		printf("%d科目的平均分是：%.2f\n",i+1,b);
	}
}

void top(int x[][5])  //找出最高分对应的学生和课程
{
	int i,j,c,m,n;
	c=x[0][0];
	m=0;
	n=0;
	for(i=0;i<10;i++)
	{
		for(j=0;j<5;j++)
		{
			if(x[i][j]>c)
			{
				c=x[i][j];
				m=i;
				n=j;
			}
		}
	}
	printf("最高分数为：%d\n",c);
	printf("最高分数对应的学生为：%d号\n",m+1);
    printf("最高分数对应的科目为：%d科目\n",n+1);
}

void fangcha(int x[][5])         //计算平均分方差
{
	int i,j;
	float a=0,e=0,f=0,g;
	for(i=0;i<10;i++)
	{
		for(j=0;j<5;j++)
		{ 
			a=a+(x[i][j]/5);     //每个学生的平均分
		}
		e=e+a;           //学生平均分之和
		f=f+pow(a,2);   //学生平均分平方和
	}
	g=0.1*f-pow((0.1*e),2);
	printf("平均分方差为：%.2f\n",g);
}
