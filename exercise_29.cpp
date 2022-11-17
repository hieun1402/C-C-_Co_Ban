#include<iostream>

int main(){
  int a[5] , b , sum=0 , odd_value=0;
  printf("Input five number: ");
  for(b=0 ; b<5 ; b++ ){
    scanf("%d",&a[b]);
  }
  for(b=0 ; b<5 ; b++){
    if(a[b] % 2 !=0){
        odd_value++;
        sum = sum + a[b];
    }
  }
  printf("sum off odd values: %d",sum);
   return 0;
}