8.18
#include <stdio.h> 
int main(){
	int tianshu(int m,int n,int a);
	int m,n,a,s;
	printf("是闰年吗：（是输入2，不是输入1）");
	scanf("%d",&a);
	printf("请输入月和日：");
	scanf("%d/%d",&m,&n) ;
	s=tianshu(m,n,a);
	printf("这是这一年的第%d天。",s);
	return 0;
}

int tianshu(int m,int n,int a){
	int s=0,i;
	for(i=1;i<=m-1;i++){
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
		s=s+31;	
		}
	
	if(i==4||i==6||i==9||i==11){
		s=s+30;
	}
}
if(m<3) {
	a=0;
}
if(a==1){
	s=s+28;
}
if(a==2){
	s=s+29;
}
s=s+n;
return s;
}
