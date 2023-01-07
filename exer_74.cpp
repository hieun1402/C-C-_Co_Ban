#include<iostream>

int main(){
char chr;
printf("List of integer equivalents of letters(a-z,A-Z)");
printf("\n=============================================");
 printf("\na-z\n");
for(chr=97 ; chr<=122 ; chr++){
    printf("%d,",chr);
}printf("\n=============================================");
 printf("\nA-Z\n");
for(chr=65 ; chr<=90 ; chr++){
    printf("%d,",chr);
}
    return 0 ;
}