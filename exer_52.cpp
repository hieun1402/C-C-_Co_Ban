#include<iostream>

int main(){
int position , i , x , min;
printf("input the length of the array: ");
scanf("%d",&x);
int a[x];
printf("Input the array elements: ");
for(i=0 ; i<x ; i++){
    scanf("%d",&a[i]);
}
min = a[0];
position = 0;
for(i=0 ; i<x ; i++){
    if(min >a[i]){
        min = a[i];
        position = i;
    }
}
printf("Smallest Value: %d\n",min);
printf("Position of the element: %d\n",position);
    return 0;
}