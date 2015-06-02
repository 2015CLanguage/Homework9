#include<stdio.h>
int compute(int m,int n, int p){
    int b1[12]={31,28,31,30,31,30,31,31,30,31,30,31},b2[12]={31,29,31,30,31,30,31,31,30,31,30,31},x=0;
	if(((m%4==0)&&(m%400!=0))||(m%400==0)){
		if(n!=1){
		    for(int i=0;i<n-1;i++){
		        x=x+b2[i];
			}
			x=x+p;
		}
		else{
		    for(int i=0;i<n-1;i++){
		        x=x+b1[i];
			}
			x=x+p;
		}
	}
	else
			x=p;
	return x;
}
void main()
{
    int m,n,p,x;
	printf("请输入年月日");
	scanf("%d%d%d",&m,&n,&p);
	x=compute(m,n,p);
	printf("该日是该年的第%d天\n",x);
}
