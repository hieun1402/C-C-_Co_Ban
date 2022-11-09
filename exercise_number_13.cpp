#include<iostream>  //khai bao thu vien 
 
 int main (){
    
    int a , b , c;
    printf("Input the first integer: ");
    scanf("%d",&a);
    printf("Input the second integer: ");
    scanf("%d",&b);
    printf("Input the third integer: ");
    scanf("%d",&c);
    if(a>b && a>c){    
    //lenh if cho phep thuc thi co dieu kien so sanh bien a voi b va c neu a lon hon b va c thi se in ra gia tri cua a da nhap vao truoc do
        printf("maximum value of three integer is: %d",a);    
    }
    if(b>a && b>c){
         printf("maximum value of three integer is: %d",b);
    }
    if(c>a && c>b){
         printf("maximum value of three integer is: %d",c);
    }
    return 0;
 }