#include "stdio.h"
void input(float score[][5])                //输入成绩
{
	int i, j;
	for (i = 0; i<10; i++)
	{
		printf("请输入第%d位学生的成绩:\n", i + 1);
		for (j = 0; j<5; j++)
			scanf("%f", &score[i][j]);
	}
}
void student_average(float score[][5], float student_a[])  //计算学生平均分
{
	int i, j;
	float sum;
	for (i = 0; i<10; i++)
	{
		for (j = 0, sum = 0; j < 5; j++)
		{
			sum = sum + score[i][j];
		}
		student_a[i] = sum / 5.0;
	}
}
void course_average(float score[][5], float course_a[])       //计算课程平均分
{
	int i, j;
	float sum;
	for (j = 0; j<5; j++)
	{
		for (i = 0, sum = 0; i<10; i++)
		{
			sum = sum + score[i][j];
		}
		course_a[j] = sum / 10.0;
	}
}
void findhighest(float score[][5])           //找到最高分和他所对应的学生与课程
{
	int i, j, m, n;
	float high = score[0][0];
	for (i = 0; i<10; i++)
	{
		for (j = 0; j<5; j++)
		{
			if (high<score[i][j])
			{
				high = score[i][j];
				m = i + 1;
				n = j + 1;
			}
		}
	}
	printf("最高分:%6.2f   NO. %d   course %d\n", high, m, n);
}
void ave_s(float student_a[])              //计算学生平均分方差
{
	int i;
	float sum1 = 0.0, sum2 = 0.0;
	for (i = 0; i<10; i++)
	{
		sum1 = sum1 + student_a[i];
		sum2 = sum2 + student_a[i] * student_a[i];
	}
	printf("平均分方差为:%8.2f\n", sum2 / 10 - (sum1 / 10)*(sum1 / 10));
}
void main()
{
	int i, j;
	float score[10][5], student_a[10], course_a[5];
	input(score);                                        //调用函数，输出结果
	student_average(score, student_a);
	course_average(score, course_a);
	printf(" NO.    课程1   课程2   课程3   课程4   课程5   平均\n");
	for (i = 0; i<10; i++)
	{
		printf("NO.%2d", i + 1);
		for (j = 0; j<5; j++)
		{
			printf("%8.2f", score[i][j]);
		}
		printf("%8.2f\n", student_a[i]);
	}
	printf("平均分:");
	for (j = 0; j<5; j++)
	{
		printf("%6.2f", course_a[j]);
	}
	printf("\n");
	findhighest(score);
	ave_s(student_a);
}
