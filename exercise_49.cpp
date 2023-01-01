#include<iostream>

int main(){
int n[5] , i ,x;
printf("Input the first number of the array: ");
scanf("%d",&x);
for(i=0 ; i<5 ; i++){
    n[i] = x;
    x *=3;
   printf("n[%d] = %d\n", i , n[i]);
}
    return 0;
}