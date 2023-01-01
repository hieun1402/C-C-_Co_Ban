#include<iostream>

int main(){
int p , r , t , simple;
printf("Input p: \n");
scanf("%d",&p);
printf("Input r: \n");
scanf("%d",&r);
printf("Input t: \n");
scanf("%d",&t);
simple = (p*r*t)/100;
printf("Simple interest= %d",simple);
    return 0;
}