#include<iostream>

int main(){
    int c ;
    printf("Input some text:\n");
    //getchar và putchar cho phép bạn viết mã vững chắc mà không cần xử lý định dạng của đầu vào hoặc đầu vào
    //getchar Trả về ký tự tiếp theo từ đầu vào tiêu chuẩn (stdin). Về cơ bản đọc một ký tự tại một thời điểm
    //put char Ghi một ký tự vào đầu ra tiêu chuẩn (thiết bị xuất chuẩn). Nó cho phép bạn xử lý bất kỳ loại đầu vào/đầu ra nào mà không cần biết loại dữ liệu chính xác của chúng
    for(; (c=getchar()) != EOF ;){
        putchar(c);
        if(c==' '){
            printf("\n");
        }
    }
    return 0;
}