//
//  main.c
//  8_17
//
//  Created by MAC on 15/6/3.
//  Copyright (c) 2015年 MAC. All rights reserved.
//
#include<stdio.h>
int main(){
    char stcmp(char *p1,char *p2);
    char str1[20],str2[20],*p1,*p2;
    printf("please input the first string!\n");
    scanf("%s",str1);
    printf("please input the second string!\n");
    scanf("%s",str2);
    p1=str1;p2=str2;
    printf("%d",stcmp(p1,p2));
}
char stcmp(char *p1,char *p2){
    int i=0;
    while(*(p1+i)==*(p2+i)){
        i=i+1;
        if(*(p1+i)=='\0'||*(p2+i)==0)
            return 0;
    }
    return(*(p1+i)-*(p2+i));
}
