#include<iostream>

int main(){
 float principal, rate, days, interest;
  printf("Input loan amount(0 to quit): \n");
  scanf("%f",&principal);
  if(principal!=0){
     printf("Input rate: \n");
     scanf("%f",&rate);
     printf("Input term of the loan in days: \n");
     scanf("%f",&days);

     interest = (principal*rate*days)/365;
     printf("The interest amount is $%.2f\n",interest);
  }
   else{
    printf("Input loan principal: ");
    scanf("%f",&principal);
   }

    return 0;
}