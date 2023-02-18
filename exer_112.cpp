#include<iostream>

int main(){
 int i , x , n = 0 , max_value = 0 , position = 0;
 printf("Input 6 number(integer): ");
 for(i=1;i<=6;i++){
    scanf("%d",&x);
    n = x;
    if(n>max_value){
        max_value = n;
        position = i;
    }
 }

 printf("Maximum value: %d\n",max_value);
 printf("position: %d\n",position);
    return 0;
}