#include"stdio.h"
void lunar(int y, int *a);
void main()
{
	int year, month, day;
	int a[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }, s = 0, *p;
	printf("Input the date(year,month,day).\n");
	scanf_s("%d %d %d", &year, &month, &day);
	lunar(year, a);
	for (p = a; p<a + month - 1; p++)
		s += *p;
	printf("It is Day %d in the year.\n", s + day);
}

void lunar(int year, int *a)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		*(a + 1) = 29;
}

