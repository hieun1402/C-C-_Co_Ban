#include<iostream>

int count_three(int num){
    int ctr = 0;
    int remainder;

    while (num>0)
    {
        remainder = num % 10;
        num = num / 10;
        if(remainder==3){
            ctr++;
        }
    }
    return ctr;
}

int main(){
    int num ;
    printf("Input a number: ");
    scanf("%d",&num);
    printf("The number of threes in the said number is %d\n",count_three(num));
}