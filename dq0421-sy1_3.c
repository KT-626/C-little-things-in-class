#include<stdio.h>
#define PI 3.14
main( )
{
float r,c,s,v;
printf("������뾶:\n");
scanf("%f",&r);
c=2*PI*r;
s=PI*r*r;
v=4.*PI*r*r*r/3.0;
printf("�ܳ�c=%.2f\r",c);
printf("���s=%.2f\n",s);
printf("���v=%.2f\n",v);
return 0 ;
}
