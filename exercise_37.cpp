#include<iostream>

int main(){
int a , b;
printf("Input the Coordinate(x,y):");
printf("Input x: ");
scanf("%d",&a);
printf("Input y: ");
scanf("%d",&b);
if(a>0 && b>0){
    printf("Quadrant-I(+,+)");
}
if(a<0 && b>0){
    printf("Quadrant-II(-,+)");
}
if(a<0 && b<0){
    printf("Quadrant-II(-,-)");
}
if(a>0 && b<0){
    printf("Quadrant-II(+,-)");
}
    return 0;
}