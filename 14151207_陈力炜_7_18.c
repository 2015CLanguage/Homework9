#include<stdio.h>
int main(){
	int year,month,day;
	int sum_day(int year,int month,int day);
	printf("input date\n");
	scanf ("%d,%d,%d",&year,&month,&day);
	sum_day(year,month,day);
	return 0;
}

int sum_day(int year,int month,int day){
	int tab[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int i,days;
	days=0;
	for (i=1;i<month;i++){
		days+=tab[i];
	}
	days+=day;
	if (year%4==0){
		days+=1;
	}
	printf ("the date is NO.%d day in this year\n",days);
	return 0;
}
