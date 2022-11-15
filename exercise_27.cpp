#include<iostream>

int main(){
   float a[5];
   int b , so_duong = 0 , so_am = 0;
   printf("input five number: ");
   for(b=0 ; b<5 ; b++){
    scanf("%f",&a[b]);
   }
   for(b=0 ; b<5 ; b++){
    if(a[b]>0){
        so_duong++;
    }
    else if (a[b]<0){
       so_am++;
    }
   }
   printf("tong so duong la: %d\n",so_duong);
   printf("tong so am la: %d",so_am);
    return 0;
}