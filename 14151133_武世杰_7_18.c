#include<stdio.h>
int f1(int month, int day)
{
	int num[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int i;
	for (i = 1; i < month; i++)
		day = day + num[i];
	return(day);
}
int f2(int year)
{
	int a;
	a = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
	return(a);
}

int main()
{
	int f1(int month, int day);
	int f2(int year);
	int year, month, day,days;
	printf("请输入年、月、日：");
	scanf("%d,%d,%d", &year, &month, &day);
	days = f1(month, day);
	if (f2(year) && month >= 3)
		days = days + 1;
	printf("%d年%d月%d日是这一年的第%d天。\n", year, month, day, days);
	return 0;
}
