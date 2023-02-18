#include<iostream>

int main(){
 int x , y , i , odd_value = 0 , even_value = 0;
 printf("Input the first and the second integer: ");
 scanf("%d%d",&x,&y);
 if(x<y){
 for(i=x+1 ; i<y ; i++){
    if(i%2==0){
        even_value += i;
    }
 }

  for(i=x+1 ; i<y ; i++){
    if(i%2!=0){
        odd_value += i;
    }
 }
 }
 
 else if(x>y){
    for(i=x-1 ; i>y ; i--){
         if(i%2==0){
        even_value += i;
    }
    }

       for(i=x-1 ; i>y ; i--){
         if(i%2!=0){
        odd_value += i;
    }
    }
 }

 printf("Sum of all even value between %d and %d : %d\n",x,y,even_value);
 printf("Sum of all odd value between %d and %d : %d\n",x,y,odd_value);
    return 0;
}