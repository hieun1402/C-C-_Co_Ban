#include<iostream>

int main(){
    int a , b;
    printf("Input a pair of number (for example 10,2 or 2,10)\n");
    printf("Input first number of pair: ");
    scanf("%d",&a);
    printf("Input second number of pair: ");
    scanf("%d",&b);
    if(a>b){
        printf("The pair is in descending order!");
    }else 
    {
        printf("The pair is in ascending order!");
    }
    
    return 0;
}