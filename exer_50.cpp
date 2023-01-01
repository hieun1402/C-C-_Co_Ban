#include<iostream>

int main(){
int n[5] , i ,x;
printf("Input the 5 member of the array: \n");
for(i=0 ; i<5 ; i++){
    scanf("%d",&x);
    n[i] = x;
     if(x<5){
    printf("n[%d] = %d\n",i,n[i]);
}
}
    return 0;
}