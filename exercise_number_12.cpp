#include<iostream> //khai bao thu vien

int main(){
    float b , c=15000;                 //khai bao bien b,c kieu so thap phan
    char a[10];                        //khai bao bien a kieu ki tu max la 10 ki tu
    printf("Input the Employees: ");
    scanf("%s",&a);
    printf("Input the working hrs: ");
    scanf("%f",&b);
    printf("Employees ID: %s\n",a);
    printf("Salary: %.2f",c*b);
    return 0;
}