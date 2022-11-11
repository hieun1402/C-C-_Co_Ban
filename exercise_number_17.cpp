#include<iostream>

int main(){
    int a , h , m , s ;
    printf("Input second: ");
    scanf("%d",&a);
    m = (int)a/60;
    h = (int)m/60;
    printf("H : M : S - %d : %d : %d",h,m,a);
    return 0;
}