#include<iostream>

int main(){
    int a , b[5], odd_sum=0;              //khai bao va khoi tao bien b co 5 gia tri
    printf("Input five number:");
    for(a=0 ; a<5 ; a++)                  
    scanf("%d",&b[a]);
    for(a=0 ; a<5 ; a++){
        if((b[a]%2)!=0){
            odd_sum = odd_sum +b[a];
        }
    }
    printf("Sum of all odd values: %d",odd_sum);
    return 0;
}