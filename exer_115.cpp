#include<iostream>

int main(){
 int i , a, b , count=0 ;
 float avg, sum=0 ;
 printf("Input two pairs value: ");
 scanf("%d%d",&a,&b);
 if(a<b){
    for(i=a;i<=b;i++){
        printf("%d ",i);
        count++;
        sum +=i;
    }
    printf("\n%d   %d",count,sum);

    avg = (sum / count);
    printf("\nAverage value of the said sequence: %.2f",avg);
 }
 else{
     for(i=b;i<=a;i++){
        printf("%d ",i);
        count++;
        sum +=i;
    }
    avg = sum / count;
    printf("\nAverage value of the said sequence: %.2f",avg);
 }
    return 0;
}