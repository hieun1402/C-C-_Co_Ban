#include<iostream>

int main(){
int i , j , n;
printf("Input the size of the square:  ");
scanf("%d",&n);
for(i=0 ; i<n ; i++){
   if(i==0 || i==n-1){
        for(j=0 ; j<n ; j++){
            printf("#"); 
    }
     }else{
        printf("#");
        for(j=0 ; j<n-2 ; j++){
            printf(" ");
        }
        printf("#");
     }
     printf("\n");
}
    return 0;
}