#include<iostream>

int main() {
	int a ;
    printf("Input number of lines: ");
    scanf("%d",&a);
    for(int j=1 ; j<=a ; j++){
        printf("%d %d %d\n",j,j*j,j*j*j);
    }
	return 0;
}