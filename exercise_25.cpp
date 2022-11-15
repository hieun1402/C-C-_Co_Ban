#include<iostream>

int main(){
  int month;
  printf("Input a number between 1 to 12 to get the month name: ");
  scanf("%d",&month);
//   if(month==1){
//     printf("january");
//   }
//   else if(month==2){
//     printf("february");
//   }else{
//     printf("there not any month");
//   }
  switch (month)
  //Lệnh switch có thể được sử dụng thay cấu trúc else if được sử dụng khi có nhiều nhánh rẽ phụ thuộc vào giá trị của cùng một expression(month)

  {
  case 1:printf("January\n");break;

  case 2:printf("February\n");break;

  case 3:printf("March\n");break;

  case 4:printf("April\n");break;

  case 5:printf("May\n");break;

  case 6:printf("June\n");break;

  case 7:printf("july\n");break;

  case 8:printf("august\n");break;

  case 9:printf("september\n");break;

  case 10:printf("october\n");break;

  case 11:printf("november\n");break;

  case 12:printf("december\n");break;
  
   default:printf("there does not any month");

  }
    return 0;
}