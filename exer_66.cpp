#include<iostream>
#include<stdio.h>
#include<time.h>
#define N 50

int main(){
  int i;
  char str;
  FILE *fptr; //khai bao con tro de lam viec voi file
  fptr = fopen("rand.dat","w"); //"w" la che do tao 1 file moi, mở file ra và ghi dữ liệu vào
  if(fptr == NULL){
    // nếu con trỏ bằng null thì sẽ hk tạo đc file và in ra câu lệnh bênh dưới
    printf("Error in creating rand.dat\n");
    return 0;
  }

  srand(time(NULL));
  fprintf(fptr, "%d\n", N); // ghi dữ liệu vào file
  for(i=1 ; i<=N ; i++){
    fprintf(fptr, "%0.4lf\n", (rand()%2001-1000)/2.e3);
  }
  fclose(fptr);//sau khi xử lí xong file phải đóng lại nếu không đóng thì chương trình sẽ không sử lí đc

  fptr = fopen("ranf.dat","r"); // "r" là chế độ mở và đọc file đã tạo
   str = fgetc(fptr); // lấy 1 kí tự trong file tại 1 thời điểm
   while (str!=EOF)
   {
    printf("%c",str);
    str = fgetc(fptr);
   }
   fclose(fptr);
   return 0;
}