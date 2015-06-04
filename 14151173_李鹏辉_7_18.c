#include<stdio.h>
void day(int a,int b,int c)
{
	int i,s=0;
	for(i=1;i<b;i++)
	{
		switch(i)
		{
		    case 1: s+=31;break;
			case 3: s+=31;break;
			case 4: s+=30;break;
			case 5: s+=31;break;
			case 6: s+=30;break;
			case 7: s+=31;break;
			case 8: s+=31;break;
			case 9: s+=30;break;
			case 10: s+=31;break;
			case 11: s+=30;break;
			case 12: s+=31;break;
			default:{
				       if(a%4==0 && a%100!=0 || a%400==0) s+=29;
				       else s+=28;
					}
		}
	}
	s+=c;
	printf("第%d天\n",s);
}

void main()
{
	int a,b,c;
    puts("请输入年:");
	scanf("%d",&a);
    puts("请输入月:");
	scanf("%d",&b);
	puts("请输入日:");
	scanf("%d",&c);
	printf("这天是%d年:",a);
	day(a,b,c);
}
