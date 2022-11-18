#include<iostream>

int main(){ 
int a[5] , b , highest = 0 , position = 0;
printf("Input 5 integer: ");
for(b=0 ; b<5 ; b++){
    scanf("%d",&a[b]);
}
for(b=0 ; b<5 ; b++){
    if(a[b] > highest){
        highest = a[b];
        position = b+1;
    }
}
printf("highest integer is %d\n ",highest);
printf("the input position is: %d",position);
   return 0 ;
}