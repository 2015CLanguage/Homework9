#include <stdio.h>
void main(){
   int i;
   char *p[12],month[12][10]={"January","Februry","March",
      "April","May","June","July","August","Septemper",
      "October","November","December"};
   for(i=0;i<12;i++) *(p+i)=*(month+i);
   printf("请输入月份号: ");
   scanf("%d",&i);
   while(i>12 || i<1){
      printf("月份号有误,请重新输入: ");
      scanf("%d",&i);
   }
   printf("%s\n",*(p+i-1));
   getch();
}
