#include<stdio.h>
int main()
{
	float ave_stu[10], ave_sub[5], grade[10][5];
	int i, j;
	void average_stu(float grade[10][5], float ave_stu[10]);
	void average_sub(float grade[10][5], float ave_sub[5]);
	int max(float grade[10][5]);
	int vairance(float *ave_stu);
	for (i = 0; i < 10; i++)
	{
		printf("请输入第%d名的学生的5门科目成绩（用空格分开）：\n", i + 1);
		for (j = 0; j < 5; j++)
		{
			scanf("%f", &grade[i][j]);
		}
	}
	average_stu(grade, ave_stu);
	max(grade);
	vairance(ave_stu);
	printf("  学生\t\t");
	for(i = 1; i < 6; i++)
	{
		printf("科目%d\t", i);
	}
	printf("学生平均分\n");
	for (i = 0; i < 10; i++)
	{
		printf(" 学生%d\t\t", i+1);
		for (j = 0; j < 5; j++)
		{
			printf("%.2f\t", grade[i][j]);
		}
		printf("%3.2f\n", ave_stu[i]);
	}
	printf("科目平均分\t");
	average_sub(grade, ave_sub);
	printf("\n");
	return 0;
}
void average_stu(float grade[10][5], float ave_stu[10])
{
	int i, j;
	float x=0;
	for (i=0; i<10; i++)
	{
		for (j=0; j<5; j++)
		{
			x += *(*(grade+i)+j);
		}
		ave_stu[i]=x/5;
		x=0;
	}
}
void average_sub(float grade[10][5], float ave_sub[5])
{
	int i, j;
	float x = 0;
	for (j=0; j<5; j++)
	{
		for(i=0; i<10; i++)
		{
			x += *(*(grade+i)+j);
		}
		*(ave_sub+i)=x/10;
		x = 0;
		printf("%.2f\t", *(ave_sub+i));
	}
}
int max(float grade[10][5])
{
	float p;
	int i=0, j=0;
	int a[2]={0,0};
	p = *(*(grade));
	for (i=0; i<10; i++)
	{
		for (j=0; j<5; j++)
		{
			if (*(*(grade+i)+j)>p)
			{
				p=*(*(grade+i)+j);
				*(a) = i;
				*(a+1) = j;
			}
		}
	}
	return (printf("\n学生最高分为%.2f，对应的学生次序与学科次序分别为：%d，%d", p, *a+1, *(a+1)+1));
}
int vairance(float ave_stu[10])
{
	float s=0.0f, s1=0.0f, s2=0.0f;
	int i;
	for (i=0; i<10; i++)
	{
		s1 += ave_stu[i] * ave_stu[i];
		s2 += ave_stu[i];
	}
	s2=(s2/10)*(s2/10);
	s=s1/10-s2;
	return (printf("\n方差为：%.2f\n", s));
}
