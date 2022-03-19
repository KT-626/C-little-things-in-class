#include<stdio.h>
#define PI 3.14
main( )
{
float r,c,s,v;
printf("请输入半径:\n");
scanf("%f",&r);
c=2*PI*r;
s=PI*r*r;
v=4.*PI*r*r*r/3.0;
printf("周长c=%.2f\r",c);
printf("面积s=%.2f\n",s);
printf("体积v=%.2f\n",v);
return 0 ;
}
