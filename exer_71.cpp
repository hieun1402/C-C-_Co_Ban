#include<iostream>

int main(){
   char str1[100] , str2[100];
   int i;
   printf("Input a string: ");
   gets(str2);
   // '\0' là ký tự số không. Trong C, nó chủ yếu được sử dụng để chỉ ra sự kết thúc của một chuỗi ký tự.
   for(i = 0 ; str2[i]!='\0'; i++){
    str1[i]=str2[i];
    str1[i]='\0';
   }
   printf("Original string: %s",str1);
    printf("\nNumber of characters = %d\n", i);
    return 0;
}