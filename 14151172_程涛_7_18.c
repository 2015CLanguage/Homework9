void main()
{
	float grade[10][5];
	input(grade);
    average_student(grade);
    average_classes(grade);
    search_max(grade);
    s(grade);
}

#include <stdio.h>
void main()
{
	int i,sum=0,year,month,day;
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	printf("请一次输入年月日：\n");
	scanf("%d,%d,%d",&year,&month,&day);
	if(year%4==0 && year%25!=0) a[1]=29;
	for(i=0;i<month;i++)
		sum=sum+a[i];
	sum=sum-a[month-1]+day;
	printf("该日是这个月的第%d天\n",sum);
}
