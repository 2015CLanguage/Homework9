#include "stdio.h"
int cal(int year, int month, int day)
{
	int tab1[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }, tab2[13] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int i;
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)           //判断是否为闰年
	{
		for (i = 1; i<month; i++)                                  //累加所在月之前天数
		{
			day = day + tab2[i];
		}
	}
	else
	{
		for (i = 1; i<month; i++)
		{
			day = day + tab1[i];
		}
	}
	return(day);
}
void main()
{
	int year, month, day, days;
	printf("输入日期:\n");
	scanf_s("%d.%d.%d", &year, &month, &day);
	days = cal(year, month, day);                             //调用函数输出
	printf("%d年%d月%d日是那一年的第%d天.\n", year, month, day, days);
}
