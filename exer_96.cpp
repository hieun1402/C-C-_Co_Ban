#include<iostream>

int main(){
 int c , count[]={0,0,0}; // khai báo chuỗi count hoặc khai báo từng biến như int blank_char=0 , tab_char=0 , new_line=0;
 printf("Input few words/tab/newlines.\n");
 for(; (c=getchar()) != EOF ;){ // c=getchar() là lấy kiểu dữ liệu được nhập từ bàn phím 
   if(c==' '){                  //EOF (end-of-file) là cờ (flag) để chỉ định kết thúc tập tin. Tùy theo trình biên dịch mà có thể có giá trị khác nhau, nhưng thường là -1
    count[0]++;
   }
   if(c=='\t'){
    count[1]++;
   }
   if(c=='\n'){
    count[2]++;
   }
 }
 printf("Blank=%d , tab=%d , newlines=%d",count[0],count[1],count[2]);
 

    return 0;
}