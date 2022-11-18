#include<iostream>

int main(){
int a , b ;
float chia;
printf("input two number : ");
scanf("%d%d",&a,&b);
if(a%b==0 && b!=0){
    chia=a/b;
    printf("Expected Output: %.1f",chia);
}
else if(b%a==0 && a!=0){
    chia=b/a;
    printf("Expected Output: %.1f",chia);
}else{
    printf("Division not possible");
}
    return 0;
}