#include<iostream>
 
int main(){
 int x , i , count=0;
 printf("Input an integer number: ");
 scanf("%d",&x);
 printf("Next 10 consecutive even numbers:\n");
 for(i=x+1 ; count<10 ; i++){
    if(i%2==0){
        printf("%d ",i);
        count++;
    }
 }
 count = 0;
  printf("\nNext 10 consecutive odd numbers:\n");
  for(i=x+1 ; count<10 ; i++){
    if(i%2!=0){
       
        printf("%d ",i);
        count++;
    }
 }
    return 0;
}