#include<iostream>

int main(){
    int p , q , r , s;
    printf("input the first integer: ");
    scanf("%d",&p);   
    printf("input the second integer: ");
    scanf("%d",&q);
    printf("input the third integer: ");
    scanf("%d",&r);
    printf("input the fourth integer: ");
    scanf("%d",&s);     
    if((q>0) && (r>0) && (s>0) && (p%2==0) && (q>r) && (s>p) && ((r+s)>(p+q))){
        printf("Correct values");
    }else{
        printf("wrong values");
    }    
    return 0;
}