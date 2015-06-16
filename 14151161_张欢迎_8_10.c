 #include<stdio.h> 
 void change(int (*p)[5]); 
 void change(int (*p)[5]) 
 { 
 	int i,j,max=p[0][0],f1x=0,f1y=0; 
 	for(i=0;i<5;i++) 
 	{ 
 		for(j=0;j<5;j++) 
 		{ 
 			if(p[i][j]>max) 
 			{ 
 				max=p[i][j]; 
 				f1x=i; 
 				f1y=j; 
 			} 
 		} 
 	} 
 	p[f1x][f1y]=p[2][2]; 
 	p[2][2]=max; 
	int m,n,k,f[5][5]={0},bx[4]={0,0,4,4},by[4]={0,4,0,4}; 
 	for(m=0;m<4;m++) 
 	{ 
 		int min=p[2][2],f2x=2,f2y=2; 
		for(n=0;n<5;n++) 
	    { 
 		    for(k=0;k<5;k++ 
 		    { 
	    	if(f[n][k]==0) 
 		    	{ 
 		    		if(p[n][k]<min) 
 			        { 
 				        min=p[n][k]; 
 			        f2x=n; 
  			        f2y=k; 
 			        } 
 				} 
 		    } 
 	    } 
 	    f[bx[m]][by[m]]=1; 
	    p[f2x][f2y]=p[bx[m]][by[m]]; 
 	    p[bx[m]][by[m]]=min; 
 	}  
 } 
 int main() 
 { 
 	int i,j,a[5][5]; 
 	printf("请输入一个5x5矩阵:\n"); 
 	for(i=0;i<5;i++) 
 	{ 
 		for(j=0;j<5;j++) 
 		{ 
 			scanf("%d",&a[i][j]); 
 		} 
 	} 
 	change(a); 
 	printf("经过变换后的矩阵变为：\n"); 
 	for(i=0;i<5;i++) 
 	{ 
 		for(j=0;j<5;j++) 
 		{ 
 			printf("%d ",a[i][j]); 
 		} 
 		printf("\n"); 
 	} 
 	return 0; 
 } 
