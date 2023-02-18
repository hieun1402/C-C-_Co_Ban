#include<iostream>

int main(){
 int x , i , e_value = 0 , o_value = 0 , p_value = 0 , n_value = 0;
 printf("Input 7 number: \n");
 for(i=0 ; i<7 ; i++){
    scanf("%d",&x);
    if(x%2==0){
        e_value++;
    }
    if(x%2!=0){
        o_value++;
    }
    if(x>0){
        p_value++;
    }
    if(x<0){
        n_value++;
    }
 }

 printf("Number of even value: %d\n",e_value);
 printf("Number of odd value: %d\n",o_value);
 printf("Number of positive value: %d\n",p_value);
 printf("Number of negative value: %d\n",n_value);
    return 0;
}