#include<iostream>

int main(){
 float s = 0;
 int i;
 for( i=1;i<=50;i++){
   printf("S=1/%d; ",i);
   s +=(float)1/i;
 }    
 printf("\nsum of S: %.2f",s);
    return 0;
}

