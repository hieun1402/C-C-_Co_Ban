#include<iostream>

int main(){
int a , b ;
printf("Input the first number: ");
scanf("%d",&a);
printf("Input the second number: ");
scanf("%d",&b);
if(a<b && b%a==0){
    printf("Multiplied");
}
else if(a>b && a%b==0){
    printf("Multiplied");
}
else{
    printf("Not Multiplied");
}
    return 0;
}