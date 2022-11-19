#include<iostream>

int main(){ 
int a , b , c , i , j=1;
printf("Input number of lines: ");
scanf("%d",&a);
printf("Number of characters in a lines:");
scanf("%d",&b);
for(c=0 ; c<a ;c++){
    for(i=1 ; i<=b ; i++){
        printf("%d ",j++);
    }
    printf("\n");

}
    return 0;
}