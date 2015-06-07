#include <stdio.h>

int monthday[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
	int year, month, day, error = 0;
	int caculate(int year, int month, int day);
	void leap(int year);
	printf("请输入年，月，日（用逗号隔开）：\n");
	scanf("%d,%d,%d", &year, &month, &day);
	leap(year);
	do
			error = 1;
			printf("请重新输入月份和日期：\n");
			scanf("%d,%d", &month,&day);
		}
		else error =0;
	}
	while(error == 1);
	printf("%d年%d月%d日是该年份中的第%d天。", year, month, day, caculate(year, month, day));
	return 0;
}

int caculate(int year, int month, int day)
{
	int i;
	int ord = 0;
	for (i = 0; i < month; i++)
	{
		ord += monthday[i];
	}
	return (ord + day);
}

void leap(int year)		//定义一个判定月份是否为闰年，如果是闰年将二月份的日期数改为29
{
	if (year % 4 == 0)
	{
		if(year % 100 != 0)
		{
			monthday[2] = 29;
		}
	}
}
