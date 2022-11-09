#include<iostream> // khai bao thu vien

int main(){
   float a , a1 , b , b1 , c;        //khai bao cac bien kieu float
   printf("input weight-Item1: ");   //in ra so ta da nhap vao da luu tru trong cac bien
   scanf("%f",&a);                   //doc cac so ta nhap vao va luu tru gia tri da cho trong bien a hoac a1 hoac b hoac b1 hoac c
   printf("no.of item1: ");
   scanf("%f",&a1);
   printf("input weight-Item2: ");
   scanf("%f",&b);
   printf("no.of item2: ");
   scanf("%f",&b1);
   c = ((a*a1)+(b*b1))/(a1+b1);     //cong thuc tinh Average value
   printf("Average value is: %.6f",c); // in ra ket qua Average da tinh truoc do
    return 0;
}