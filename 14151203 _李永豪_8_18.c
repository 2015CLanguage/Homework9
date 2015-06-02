//
//  main.c
//  8—18
//
//  Created by MAC on 15/6/2.
//  Copyright (c) 2015年 MAC. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
char *name[13]={"invalid month","January","February","March","April","May","June","July","August","September","October","November","December"};
    int i;
    
    printf("please input month !\n");
    scanf("%d",&i);
    if(i<13&&i>=0)
        printf("English name :'%s'",*(name+i));
    else
        printf("'error'");
    return 0;
}
