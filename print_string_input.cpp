#include<iostream>
#include<string.h>
#include<stdio.h>
int main()
{
    int a ;
    char string[200] ;
                                 /*hàm scanf dùng để nhập vào 1 sâu kí tự mà không có khoảng trắng hay enter*/
    fflush(stdin);              //dùng để xóa bộ đệm mà hàm scanf chưa đọc được vẫn còn lưu trong std tránh hiện tưởng trôi lệnh khi dùng gets
    printf("my name is : \n");
    gets(string);               //hàm gets dùng để input vào các kí tự có khoảng trắng ví dụ "nguyen van hieu"
    printf("my year old: \n");
    scanf("%d",&a);
    printf("My name is %s and I'm %d year old",string,a);
    return 0;
}