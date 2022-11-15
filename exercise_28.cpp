#include<iostream>

int main(){
   float a[5] , average=0;
   int b , positive = 0;
   printf("Input five number : ");
   for(b = 0 ; b < 5 ; b++){
    scanf("%f",&a[b]);
   }
   for(b=0 ; b<5 ; b++){
    if(a[b]>0){
        positive++;              // dem cac so duong da input vao
        average = average+a[b]; //tinh tong cac so duong
    }
    
   }
   printf("number of positive : %d\n",positive);
   printf("Average value of the said positive numbers: %.2f",average/positive);
    return 0;
}