// #include<iostream>

// int main(){
//  float f_temp , c_temp ;
//  float start_temp=0 , end_temp=150;
//  int step=10;
//  printf("Celsius to Fahrenheit\n");
//  printf("---------------------\n");
//  for(start_temp=0 ; start_temp<=end_temp ; start_temp+step){
//    f_temp = start_temp*9/5+32;
//    printf("%6.1f \t %8.1f\n",start_temp,f_temp);

//  }
//  printf("\n\n");
//  printf("Fahrenheit to Celsius\n");
//  printf("----------------------\n");
//  for(start_temp=0 ; start_temp<=150 ; (start_temp+step)){
//     c_temp = (start_temp-32)*5/9;
//     printf("%6.1f \t %8.1f\n",start_temp,c_temp);
//  }

//     return 0;
// }


#include <stdio.h>

int main()
{
  float f_temp,c_temp;
  float start_temp, end_temp;
  int STEP;
  start_temp = 0;
  end_temp = 150;
  STEP = 10;
  printf("Celsius to Fahrenheit\n");
  printf("---------------------\n");
  printf("Celsius   Fahrenheit\n");
  while (start_temp <= end_temp)
  {
    f_temp = start_temp * 9 / 5 + 32;
    printf("%6.1f \t %8.1f\n", start_temp, f_temp);
    start_temp = start_temp + STEP;
  }
  start_temp = 0;
  end_temp = 150;
  STEP = 10;
  printf("\n\nFahrenheit to Celsius");
  printf("\n---------------------\n");
  printf("Fahrenheit  Celsius\n");
  while (start_temp <= end_temp)
  {
    c_temp = (start_temp - 32) * 5 / 9;
    printf("%6.1f \t %8.1f\n", start_temp, c_temp);
    start_temp = start_temp + STEP;
  }
}
