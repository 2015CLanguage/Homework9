#include <stdio.h>
int main(void)
{ int m; 
    char *months[12] = { 
		"January", "February", "Marcy", "April", "May", "June", "July",
		"August", "September", "October", "November", "December"    
    };    
	   printf("请输入月份号:");    
	   scanf("%d", &m);       
	   puts(months[m - 1]);      
	   return 0;
}
