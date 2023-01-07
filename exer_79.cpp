#include<iostream>

int main(){
int n;
printf("Sample Output: ");
printf("\nx\tx+2\tx+4\tx+6\n");
printf("-------------------------------\n");
for(n=1 ; n<=13 ; n+=3){
    printf("%d\t%d\t%d\t%d\n",n,(n+2),(n+4),(n+6));
}
    return 0;
}