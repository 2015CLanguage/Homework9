#include <stdio.h> 
int main(){
int strcmp(char *p1,char *p2);
char s1[10],s2[10];
char *p1,*p2;
int a;
gets(s1);
gets(s2);
p1=&s1[0];
p2=&s2[0];
a=strcmp(p1,p2);
printf("%d",a);
return 0;
}

int strcmp(char *p1,char *p2){
	int i;
	i=0;
	while(*(p1+i)==*(p2+i))
	if(*(p1+i++)=='\0')
	return 0;
	return(*(p1+i)-*(p2+i));
}
