#include<iostream>

int main(){
    int a  , b , sum = 0 , odd_number = 0 , count=0;
    printf("input first number of pair:  ");
    scanf("%d",&a);
    printf("input second number of pair: ");
    scanf("%d",&b);
     printf("list of odd number is:\n");
    if(a<b){
    for(count=a ; count<=b ; count++){
        if((count%2) !=0){
            odd_number = count;
            sum = sum + odd_number;
             printf("%d\n",odd_number);
        }
    }
     }
    if(a>b){
     for(count=b ; count<=a ; count++){
        if((count%2) !=0){
            odd_number = count;
            sum = sum + odd_number;
             printf("%d\n",odd_number);
        }
    }
     }
    printf("sum = %d",sum);
   return 0 ;
}