#include<stdio.h>
int main()
{
    char *month[12];
    int i;
    month[0]="January";
    month[1]="February";
    month[2]="March";
    month[3]="April";
    month[4]="May";
    month[5]="June";
    month[6]="July";
    month[7]="August";
    month[8]="September";
    month[9]="October";
    month[10]="November";
    month[11]="December";
    printf("input the month:");
    scanf("%d",&i);
    printf("%s",month[i-1]);
    return 0;
}
