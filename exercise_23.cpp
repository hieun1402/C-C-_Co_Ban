#include<iostream>

int main(){
  float a , b, c , cv;
  printf("input a: ");
  scanf("%f",&a);
  printf("input b: ");
  scanf("%f",&b);
  printf("input c: ");
  scanf("%f",&c);
  cv = a+b+c;
  if((a+b)>c && (a+c)>b && (b+c)>a){
    printf("day la 1 tam giac\n");
    printf("chu vi tam giac la: %.1f",cv);
  }else{
    printf("day khong phai tam giac");
  }
    return 0;
}