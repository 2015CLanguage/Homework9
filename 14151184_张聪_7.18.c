#include<stdio.h>
int main()
{int y,m,d;
printf("please input year,month,day\n");
scanf("%d" "%d" "%d",&y,&m,&d);
if(y%4==0&&y%100!=0||y%400==0){
	switch(m)
	{
	    case 1:printf("第%d天",d);break;
        case 2:printf("第%d天",31+d);break;
		case 3:printf("第%d天",60+d);break;
		case 4:printf("第%d天",91+d);break;
		case 5:printf("第%d天",121+d);break;
		case 6:printf("第%d天",152+d);break;
		case 7:printf("第%d天",182+d);break;
		case 8:printf("第%d天",213+d);break;
		case 9:printf("第%d天",244+d);break;
		case 10:printf("第%d天",274+d);break;
		case 11:printf("第%d天",305+d);break;
		case 12:printf("第%d天",335+d);break;
		default:printf("enta data error!\n");

	}
}
else
	switch(m)
	{
	    case 1:printf("第%d天",d);break;
        case 2:printf("第%d天",31+d);break;
		case 3:printf("第%d天",59+d);break;
		case 4:printf("第%d天",90+d);break;
		case 5:printf("第%d天",120+d);break;
		case 6:printf("第%d天",151+d);break;
		case 7:printf("第%d天",181+d);break;
		case 8:printf("第%d天",212+d);break;
		case 9:printf("第%d天",243+d);break;
		case 10:printf("第%d天",273+d);break;
		case 11:printf("第%d天",304+d);break;
		case 12:printf("第%d天",334+d);break;
		default:printf("enta data error!\n");

	}
return 0;
}
