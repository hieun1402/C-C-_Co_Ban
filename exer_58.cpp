#include<iostream>

int main(){
float n[4] , min , max , x;
int i;
printf("Input four number: ");
for(i=0 ; i<4 ; i++){
    scanf("%f",&n[i]);
    max = n[0];
    min = n[0];
}
for(i=0;i<4;i++){
    if(n[i]>max){
        max = n[i];
    }
    if(n[i]<min){
        min = n[i];
    }
}
printf("max=%.4f\n",max);
printf("min=%.4f\n",min);
printf("Difference is %.4f",max-min);
    return 0;
}