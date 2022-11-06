#include<iostream>
int main()
{
    int a ;
    char string[100] ;
    printf("my name is : \n");
    scanf("%s",&string);
    printf("my year old : \n");
    scanf("%d",&a);
    //printf("my year old is %d",a);
    printf("My name is %s and I'm %d year old",string,a);
    return 0;
}