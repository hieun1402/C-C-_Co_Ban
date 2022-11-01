#include<iostream>

int main()
{
   int a=7 , b=5 , c=1;
   float d=0.5 , e=9.45 , f=0.55;
   printf("%d + %d = %d\n",a,b,a+b);
   printf("%.1f + %.1f =%.0f\n",d,d,d+d);
   printf("%.2f + %.2f =%.0f\n",e,f,e+f);
   printf("%d + %.1f = %.1f\n",c,d,c+d);
   return(0);
}