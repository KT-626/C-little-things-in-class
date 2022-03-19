#include <stdio.h>
#include <math.h> 
main()
{	float a,b,c,p,s;
	scanf("%f,%f,%f",&a,&b,&c);
p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("a=$4.2f,b=$4.2f,c=$4.2f, area=%6.2f\n",a,b,c,s);
}
