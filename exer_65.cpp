#include<iostream>

int main(){
int a , b , n , i , j =1;
printf("Input stars number: \n");
scanf("%d",&a);
printf("Input end number: \n");
scanf("%d",&b);
for(n=a ; n<b ; n++){
    for(i=a ; i<10 ; i++){
        if(i%2!=0){
        printf("%d ",j++);
        }
    }printf("\n");
}

return 0;
}