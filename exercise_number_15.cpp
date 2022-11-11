#include<iostream> //khai bao thu vien
#include<math.h>   //khai bao thu vien toan hoc


int main(){
    float x1 , y1 , x2 , y2 , dis; // khai bao va khoi tao cac bien
    printf("Input x1: ");
    scanf("%f",&x1);
    printf("Input y1: ");
    scanf("%f",&y1);
    printf("Input x2: ");
    scanf("%f",&x2);
    printf("Input y2: ");
    scanf("%f",&y2);
    printf("Distance between the said points: %.4f",sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))));
    return 0;
}