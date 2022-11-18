#include<iostream>

int main(){
int star , end , count , sum=0;
printf("Input the first integer: ");
scanf("%d",&star);
printf("Input the second number: ");
scanf("%d",&end);
for(count=star ; count<=end ; count++){
    if(count%17!=0){
        sum = sum + count;
    }
}
printf("sum: %d",sum);
    return 0;
}