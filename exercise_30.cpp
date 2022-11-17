#include<iostream>

int main(){
   int star , end , a , b;
   printf("input star number and end number: ");
   scanf("%d%d",&star,&end);
   for(a = star ; a<=end ; a++){
    if(a%2==0){
        b = a*2;
        printf("%d*2=%d\n",a,b);
    }
   }
    return 0;
}