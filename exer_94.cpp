#include<iostream>

int main(){
float weight , height , mbi;
printf("Input weight in kg: \n");
scanf("%f",&weight);
printf("Input height in meter: \n");
scanf("%f",&height);
mbi = weight / (height*height);
printf("Your MBI is: %f\n",mbi);
    return 0 ;
}