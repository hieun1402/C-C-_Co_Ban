#include<iostream>

int main(){
int a[5] , i , n=0 , sum = 0 ;
float avg=0;
printf("Input n: ");
for(i=0; i<a[5] ;i++){
scanf("%d",&a[i]);
if(a[i]<=0){
    break;
}
n++;
avg = avg+a[i];
printf("%d ",a[i]);
}
printf("\nsum: %.2f",avg/n);
    return 0;
}