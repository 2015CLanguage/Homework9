#include"stdio.h"
float a[10][5];
float a_stu[10];
float a_cou[5];
int b, c;

void main()
{
	int i, j;
	float h;
	void student_average();
	void course_average();
	float highest();
	float average_variance();

	for (i = 0; i<10; i++)
	{
		printf("Input the %d student's five scores\n", i + 1);
		for (j = 0; j<5; j++)
			scanf_s("%d", &a[i][j]);
	}
	student_average();
	course_average();
	highest();
	average_variance();
	for (i = 0; i<10; i++)
	{
		printf("The No.%d student's average score is", i + 1);
		printf("%2d", a_stu[i]);
	}
	for (j = 0; j<5; j++)
	{
		printf("The No.%d course's average score is", j + 1);
		printf("%2d\n", a_cou[i]);
	}
	h = highest();
	printf("highest:%7.2f  No. %2d course %2d\n", h, b, c);
	printf("Variance %8.2f\n", average_variance());
}
void student_average()
{
	int i, j;
	float s;
	s = 0;
	for (i = 0; i<10; i++)
	{
		for (j = 0; j<5; j++)
			s = s + a[i][j];
		a_stu[i] = s / 5.0;
	}
}
void course_average()
{
	int i, j;
	float s;
	s = 0;
	for (j = 0; j<10; j++)
	{
		for (i = 0; i<5; i++)
			s = s + a[i][j];
		a_cou[j] = s / 10.0;
	}
}
float highest()
{
	float h;
	int i, j;
	h = a[0][0];
	for (i = 0; i<10; i++)
		for (j = 0; j<5; j++)
			if (a[i][j]>h)
			{
		h = a[i][j];
		b = i + 1;
		c = j + 1;
			}
	return(h);
}
float average_variance()
{
	int i;
	float sumx, sumxn;
	sumx = 0.0;
	sumxn = 0.0;
	for (i = 0; i<5; i++)
	{
		sumx += a_stu[i] * a_stu[i];
		sumxn += a_stu[i];
	}
	return(sumx / 5 - (sumxn / 5)*(sumxn / 5));
}

