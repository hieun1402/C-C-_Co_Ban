#include<iostream>

int main(){
 int x, y , i , even_value = 0 ;
 printf("Input two number: ");
 scanf("%d%d",&x,&y);
 if(x<y){
 for(i=x+1 ; i<y ; i++){
    if(i%2==0){
        even_value += i;
    }
 }printf("Sum of all even values between %d and %d: %d",x,y,even_value);
 }
 else{
    for(i=x-1 ; i>y ; i--){
    if(i%2==0){
        even_value += i;
    }
 }printf("Sum of all even values between %d and %d: %d",x,y,even_value);
 }
    return 0;
}