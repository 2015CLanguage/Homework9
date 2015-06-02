
#include <stdio.h>

int main() {
    void change(int a[5][5]);
    int a[5][5],i,j;
    for(i=0;i<5;i++){
        printf("input line '%d'\n",i+1);
        for(j=0;j<5;j++){
            scanf("%d",&a[i][j]);
        }
    }
    change(a);
    printf("the chaged array is:\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++)
            printf("%5d",a[i][j]);
        printf("\n");
    }
    return 0;
}
void change(int a[5][5]){
//looking for the biggest and smallest number.
    int *max,*min,*p;
    int i,j,temp;
    max=&a[0][0];
    min=&a[0][0];
    p=&a[0][0];
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(*max<*(p+5*i+j))max=(p+5*i+j);
            if(*min>*(p+5*i+j))min=(p+5*i+j);
        }
    }
    temp=*p;*p=*min;*min=temp;
    temp=*(p+12);*(p+12)=*max;*max=temp;
//looking for the second smallest number.
    min=p+1;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(*(p+5*i+j)!=*p&&*min>*(p+5*i+j))
                min=p+5*i+j;
        }
    }
    temp=*(p+4);*(p+4)=*min;*min=temp;
//looking for the third smallest number.
    min=p+1;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(*(p+5*i+j)!=*p&&*(p+5*i+j)!=*(p+4)&&*min>*(p+5*i+j))
                min=p+5*i+j;
        }
    }
    temp=*(p+20);*(p+20)=*min;*min=temp;
//looking for the fourth smallest number.
    min=p+1;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(*(p+5*i+j)!=*p&&*(p+5*i+j)!=*(p+4)&&*(p+5*i+j)!=*(p+20)&&*min>*(p+5*i+j))
                min=p+5*i+j;
        }
    }
    temp=*(p+24);*(p+24)=*min;*min=temp;
}
