 #include<stdio.h> 
 #include<string.h> 
 int s(char*p1,char*p2); 
 int main() 
 { 
              int p; 
              char *p1,*p2,s1[20],s2[20]; 
              printf("请输入两个需要比较的字符串：\n"); 
              scanf("%s",s1); 
              scanf("%s",s2); 
              p1=&s1[0]; 
              p2=&s2[0]; 
              p=s(s1,s2); 
              printf("比较的结果是：%d,\n",p); 
              return 0; 
 } 
 int s(char*p1,char*p2) 
 { 
              int i; 
              i=0; 
              while(*(p1+i)==*(p2+i)) 
              if(*(p1+i++)=='\0') 
              return (0); 
              return(*(p1+i)-*(p2+i)); 
 } 
