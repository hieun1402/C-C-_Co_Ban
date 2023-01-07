#include<iostream>

int main(){
char n;
int a , i ,j;
printf("Input character: \n");
scanf("%c",&n);
printf("Input the size of the square: \n");
scanf("%d",&a);
for(i=0 ; i<a ; i++){
    for(j=0 ; j<a ; j++){
        printf("%c ",n);
    }printf("\n");
}
    return 0;
}