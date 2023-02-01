#include<iostream>

int main(){
 int m , max=10 , x, binom=1;
 
 for(m=0 ; m<=max ; m++){
    printf("%d ",m);
    for(x=0 ; x<=m ; x++){
     // B(m,x) bang 1 neu m hoac x = 0
     if(m==0 || x==0){
        printf("%2d",binom);
     }
     if(m!=0 && x!=0){
      //cong thuc B(m,x) = B(m,x - 1) * (m - x + 1) / x
        binom = binom * (m-x+1) / x;
        printf("%4d",binom);
     }
 }
       printf("\n");
 }


    return 0;
}