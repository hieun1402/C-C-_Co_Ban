#include<iostream>

int main(){
int a = 1234 , b ;
printf("Input the password: ");
scanf("%d",&b);
if(b == a){
    printf("correct password!");
}else{
    printf("Incorrect password!");
}
    return 0;
}