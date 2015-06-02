//
//  main.c
//  14
//
//  Created by MAC on 15/5/26.
//  Copyright (c) 2015年 MAC. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    void perav(float a[10][5]);
    void claav(float a[10][5]);
    void top(float a[10][5]);
    void var(float a[10][5]);
    float a[10][5];
    int i,j;
    for(i=0;i<10;i++){
        printf("\ninput student %d!\n",i+1);
        for(j=0;j<5;j++)
            scanf("%f",&a[i][j]);
    }
    for(i=0;i<10;i++){
        printf("\nNO%2d",i+1);
        for(j=0;j<5;j++)
            printf("%8.2f",a[i][j]);
        printf("\n");
    }
    perav(a);
    claav(a);
    top(a);
    var(a);
    return 0;
}
//计算个人平均成绩
void perav(float a[10][5]){
    float s;
    int i,j;
    printf("the personal average grade are :\n");
    for(i=0;i<10;i++){
        s=0;
        for(j=0;j<5;j++)
            s=s+a[i][j];
        s=s/5;
        printf("%8.2f",s);
    }
    printf("\n");
}
//计算每门课的平均分
void claav(float a[10][5]){
    int i,j;
    float s;
    printf("average grade of each class are :\n");
    for(i=0;i<5;i++){
        s=0;
        for(j=0;j<10;j++)
            s=s+a[j][i];
        s=s/10;
        printf("%8.2f",s);
    }
    printf("\n");
}
//计算最高分对应的学生和课程
void top(float a[10][5]){
    int p=0,q=0,i,j;
    float temp=a[0][0];
    for(i=0;i<10;i++){
        for(j=0;j<5;j++){
            if(a[i][j]>temp){
                p=i+1;q=j+1;temp=a[i][j];
            }
        }
    }
    printf("highest:%7.2f,number:%5d,course:%5d\n",temp,p,q);
}
//计算平均分方差
void var(float a[10][5]){
    float va,sum1=0,sum2=0,s;
    int i,j;
    for(i=0;i<10;i++){
        s=0;
        for(j=0;j<5;j++)
            s=s+a[i][j];
        s=s/5;
        sum1=sum1+s*s;
        sum2=sum2+s;
    }
    va=sum1/10-(sum2/10)*(sum2/10);
    printf("variance :%8.2f\n",va);
}
