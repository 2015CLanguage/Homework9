#include <stdio.h>
#include <math.h>
float meigerendepingjunfen(float a,float b,float c,float d,float e);
float meimenkedepingjunfen(float a,float b,float c,float d,float e,float f,float g,float h,float i,float j);
float highest();
float fangcha(float a1,float a2,float a3,float a4,float a5,float a6,float a7,float a8,float a9,float a10);
float score[10][5];
int r,c;
int main()
{
	printf("对每个学生的成绩按照语文数学英语物理生物的顺序输入");
	int i,j;
	float h;
	float ave1,ave2,ave3,ave4,ave5,ave6,ave7,ave8,ave9,ave10;
	float a1,a2,a3,a4,a5;
	float fang;
      for(i=0;i<10;i++)
	  {for(j=0;j<5;j++)
	  scanf("%f",score[i][j]);}
ave1=meigerendepingjunfen(score[0][0],score[0][1],score[0][2],score[0][3],score[0][4]);
ave2=meigerendepingjunfen(score[1][0],score[1][1],score[1][2],score[1][3],score[1][4]);
ave3=meigerendepingjunfen(score[2][0],score[2][1],score[2][2],score[2][3],score[2][4]);
ave4=meigerendepingjunfen(score[3][0],score[3][1],score[3][2],score[3][3],score[3][4]);
ave5=meigerendepingjunfen(score[4][0],score[4][1],score[4][2],score[4][3],score[4][4]);
ave6=meigerendepingjunfen(score[5][0],score[5][1],score[5][2],score[5][3],score[5][4]);
ave7=meigerendepingjunfen(score[6][0],score[6][1],score[6][2],score[6][3],score[6][4]);
ave8=meigerendepingjunfen(score[7][0],score[7][1],score[7][2],score[7][3],score[7][4]);
ave9=meigerendepingjunfen(score[8][0],score[8][1],score[8][2],score[8][3],score[8][4]);
ave10=meigerendepingjunfen(score[9][0],score[9][1],score[9][2],score[9][3],score[9][4]);
printf("这十个人的平均成绩是%f\n,%f\n%,f\n,%f\n%,%f\n%,%f\n%,%f\n%,%f\n%,%f\n%,%f\n%",ave1,ave2,ave3,ave4,ave5,ave6,ave7,ave8,ave9,ave10);
a1=meimenkedepingjunfen(score[0][0],score[1][0],score[2][0],score[3][0],score[4][0],score[5][0],score[6][0],score[7][0],score[8][0],score[9][0]
);
a2=meimenkedepingjunfen(score[0][1],score[1][1],score[2][1],score[3][1],score[4][1],score[5][1],score[6][1],score[7][1],score[8][1],score[9][1]
);
a3=meimenkedepingjunfen(score[0][2],score[1][2],score[2][2],score[3][2],score[4][2],score[5][2],score[6][2],score[7][2],score[8][2],score[9][2]
);
a4=meimenkedepingjunfen(score[0][3],score[1][3],score[2][3],score[3][3],score[4][3],score[5][3],score[6][3],score[7][3],score[8][3],score[9][3]
);
a5=meimenkedepingjunfen(score[0][4],score[1][4],score[2][4],score[3][4],score[4][4],score[5][4],score[6][4],score[7][4],score[8][4],score[9][4]
);
printf("这几门课的平均成绩是%f,%f,%f,%f,%f",a1,a2,a3,a4,a5);
fang=fangcha(ave1,ave2,ave3,ave4,ave5,ave6,ave7,ave8,ave9,ave10);
printf("方差是%f",fang);
h=highest();
printf("最高分：%7.2f   NO.%2d   coure %2d\n");




return 0;}




float meigerendepingjunfen(float a,float b,float c,float d,float e)
{float f;
f=(a+b+c+d+e)/5;
return f;
}


float meimenkedepingjunfen(float a,float b,float c,float d,float e,float f,float g,float h,float i,float j)
{
float z;

g=(a+b+c+d+e+f+g+h+i+j)/10;

return z;
}



float highest(float a)
{
float high;
int i,j;
high=score[0][0];
for (i=0;i<10;i++)
   for (j=0;j<5;j++)
	   if (score[i][j]>high)
	   {high=score[i][j];
	   r=i+1;
	   c=j+1;}
return (high);


}

float fangcha(float a1,float a2,float a3,float a4,float a5,float a6,float a7,float a8,float a9,float a10)
{float i;
i=((a1*a1+a2*a2+a3*a3+a4*a4+a5*a5+a6*a6+a7*a7+a8*a8+a9*a9+a10*a10)/10)-((a1+a2+a3+a4+a5+a7+a8+a9+a10)/10)*((a1+a2+a3+a4+a5+a7+a8+a9+a10)/10);
return i;

}
