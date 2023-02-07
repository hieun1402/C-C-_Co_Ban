#include<iostream>
#include<math.h>
#include<stdlib.h>

int main(){
 int h, m;
 double angle;
 const int num[13]={0,30,60,90,120,150,180,210,240,270,300,330,0};
 printf("Input hour(h) and minute(m): \n");
 scanf("%d %d",&h,&m);
 angle = num[h] -m*6;
 if(angle<0){
    angle = -angle;
 }
 if(angle>180){
    angle = 360 - angle;

 }
 if(m<10){
    printf("At %d : %d the angle is %.1f degrees.\n",h,m,angle);
 }else{
    printf("The angle is %.1f degrees at %d : %d.\n",angle,h,m);
 }


    return 0;
}