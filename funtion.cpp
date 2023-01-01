#include<iostream>
 
int TinhTong(int a, int b){
    int sum , hieu , nhan ,chia;
    sum = a+b;
    hieu = a-b;
    nhan = a*b;
    chia = a/b;
    // printf("tong=%d\n",sum);
    // printf("hieu=%d\n",hieu);
    // printf("nhan=%d\n",nhan);
    // printf("chia=%d\n",chia);
    return hieu;
}


int main(){
int a , b, sum;
printf("nhap a: ");
scanf("%d",&a);
printf("nhap b: ");
scanf("%d",&b);
int tong = TinhTong(a, b);
    printf("tong=%d\n",tong);
    // printf("hieu=%d\n",hieu);
    // printf("nhan=%d\n",nhan);
    // printf("chia=%d\n",chia);
    return 0;
}