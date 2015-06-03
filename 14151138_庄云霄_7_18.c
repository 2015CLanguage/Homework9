#include<stdio.h>    //本代码纯属原创，如需转载，敬请向助教老师报告出处^^
int main(){
	void jisuan(int year,int month,int day);
	int year,month,day;
	printf("请分别输入年："); 
	scanf("%d",&year);
	printf("\n请输入月：",&month);
	scanf("%d",&month);	
	printf("\n请输入日：",&day); 
	scanf("%d",&day);	
	jisuan(year,month,day);
	return 0;
} 

void jisuan(int year,int month,int day){
	int list1[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	int list2[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

	int a,b,i;

	if(year%4 !=0){
		for(i=0;i<month;i++){
			a += list1[i];
		}
		b=a+day;
		printf("这是该年的第%d天。",b);
	}
	else if(year%4 ==0){
		for(i=0;i<month;i++){
			a += list2[i];
		}
		b=a+day;
		printf("这是该年的第%d天。",b);
	}
}
