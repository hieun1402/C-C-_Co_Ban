#include<iostream>

int main(){
int value , number;
printf("Please input number: ");
scanf("%d",&value);
if(value<0){
    number = value * -1;
    // value  = number;
    printf("Original value: %d",value);
    printf("\nAbsolute value: %d",number);
}else{
    number = value;
    printf("Original value: %d",value);
    printf("\nAbsolute value: %d",number);
}
    return 0;
}