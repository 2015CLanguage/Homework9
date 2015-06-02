#include <stdio.h>
void f(int a[3][5])
{
int i,j;
float b;
for(i=0,b=0;i<3;i++)
	{for(j=0;j<5;j++)
		{b=b+a[i][j];}
	b=b/5;
	printf("第%d个学生的平均成绩是：%lf\n",i+1,b);
	}	
}
void g(int a[3][5])
{
int i,j;
float b;
for(j=0,b=0;j<5;j++)
	{for(i=0;i<3;i++)
		{b=b+a[i][j];}
	b=b/3;
	printf("第%d科的平均成绩是：%lf\n",j+1,b);
	}
}




void main()
{
int i,j,a[3][5];
printf("请输入3个学生的成绩：\n");
for(i=0;i<3;i++)
	{for(j=0;j<5;j++)
		scanf("%d",&a[i][j]);
	}	
f(a);
g(a);
}
