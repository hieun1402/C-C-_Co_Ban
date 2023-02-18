#include<iostream>
#include<math.h>
int main(){
 int x, y , multi;
 printf("Input x and y: \n");
 scanf("%d%d",&x,&y);
  if(x>y){
    multi = x % y; // % là chia lấy phần dư
    if(multi == 0){
        printf("Multiplies!");
    }else{
        printf("Not Multiplies!");
    }
  }else{
    multi = y % x;
    if(multi == 0){
         printf("Multiplies!");
    }else{
        printf("Not Multiplies!");
    }
  }
    return 0;
}