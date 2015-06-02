#include <stdio.h>
int isleap(int n);
int calculate(int n,int flag,int m,int d);

int main()
{
    int n,m,d,day;
    printf("请输入年:");
    scanf("%d",&n);
    printf("请输入月:");
    scanf("%d",&m);
    printf("请输入日:");
    scanf("%d",&d);
    day=calculate(n,isleap(n),m,d);
    printf("是这一年的第%d天\n",day);
}

int isleap(int n)
{
    int leap;
    if (n%4==0)
    {
        if (n%100==0)
        {
            if (n%400==0)
            {
                leap=1;
            }
            else
                leap=0;
        }
        else
            leap=1;
    }
    else
        leap=0;
    return leap;
}

int calculate(int n,int flag,int m,int d)
{
    int day;
    if (flag==1)
    {
        switch (m)
        {
            case 1:{day=d;break;}
            case 2:{day=31+d;break;}
            case 3:{day=60+d;break;}
            case 4:{day=91+d;break;}
            case 5:{day=121+d;break;}
            case 6:{day=152+d;break;}
            case 7:{day=182+d;break;}
            case 8:{day=213+d;break;}
            case 9:{day=244+d;break;}
            case 10:{day=274+d;break;}
            case 11:{day=305+d;break;}
            case 12:{day=335+d;break;}
            default:
                break;
        }

    }
    
    else if (flag==0)
    {
        switch (m)
        {
            case 1:{day=d;break;}
            case 2:{day=31+d;break;}
            case 3:{day=59+d;break;}
            case 4:{day=90+d;break;}
            case 5:{day=120+d;break;}
            case 6:{day=151+d;break;}
            case 7:{day=181+d;break;}
            case 8:{day=212+d;break;}
            case 9:{day=243+d;break;}
            case 10:{day=273+d;break;}
            case 11:{day=304+d;break;}
            case 12:{day=334+d;break;}
            default:
                break;
        }

    }
    return day;
}
