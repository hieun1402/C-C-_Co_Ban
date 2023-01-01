#include<iostream>

int main(){
   int n[4] , x , min , max  , i , sum=0;
   float avg;
   printf("Input a positive interger: ");
   for(i=0;i<4;i++){
    scanf("%d",&n[i]);
    sum +=n[i];
    min = n[0];
    max = n[0];
   }
   for(i=0;i<4;i++){
     if(n[i]<min){
    min=n[i];
    }
    if(n[i]>max){
     max=n[i];
   }
   }
   avg = sum/i;
   printf("average value: %.1f\n",avg);
   printf("Maximum value: %d\n",max);
   printf("Minimum value: %d\n",min);
   printf("Number of positive values entered is : %d",i);
    return 0;
}
