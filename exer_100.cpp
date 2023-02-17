#include<iostream>
#include<math.h>

int main(){
   double amt;
   unsigned int note_amt, coins_amt;

   printf("Input the currency value (floating point wwith two decimal places):\n");
   scanf("%lf",&amt);      //10387.75
   note_amt = (int)amt;    // note_amt = 10387
   amt = amt - note_amt;   // amt = 10387.75 - 10378 = 0.75
   coins_amt = round((amt*100)); // coins_amt = 0.75*100 = 75
   //round() function là hàm dùng để làm tròn chữ số thập phân sau dấu chấm "từ .1>.5 vd:5.4 thành 5.0" và "từ .6>.9 vd: 5.7 thành 6.0"

   printf("\nCurrency Notes: \n");
   printf("100 number of Notes: %d",note_amt/100); // 10387/100 = 103,87 = 103
   note_amt = note_amt - (note_amt/100)*100; // note_amt = 10387 - (103) * 100 = 87

   if(note_amt>50){
    printf("\n50 number of Notes: 1");
    note_amt = note_amt -50; // note_amt = 87 -50 = 37
   }

   if(note_amt/20>0){
    printf("\n20 number of Notes: %d",note_amt/20); //37 / 20 = 1.85 = 1
    note_amt = note_amt - (note_amt/20) * 20;      //37 - (1) * 20 = 17
   }

   if(note_amt/10>0){
    printf("\n10 number of Notes: %d",note_amt/10); // 17 / 10 = 1.7 = 1
    note_amt = note_amt -(note_amt/10) * 10;         // 17 - (1) * 10 = 7
   }

   if(note_amt/5>0){
    printf("\n5 number of Notes: %d",note_amt/5); // 7 / 5 = 1.4 = 1
    note_amt = note_amt - (note_amt/5) * 5;      // 7 - (1) * 5 = 2
   }

   if(note_amt>0){
    printf("\n2 number of Notes: %d",note_amt/2); // 2/2=1
    note_amt = note_amt - (note_amt/2) * 2;       // 2 - (1) * 2 = 0
   }

   if(note_amt>0){
    printf("\n1 number of Notes: %d",note_amt);
   }

   printf("\n\nCurrency Coins: ");
   if(coins_amt>50){
    printf("\n.50 number of Coins: 1");
    coins_amt = coins_amt - 50; // 75 - 50 = 25
   } 

   if(coins_amt/25>0){
    printf("\n.25 number of Coins: %d",coins_amt/25); // 25/25=1
    coins_amt = coins_amt - (coins_amt/25) * 25;      // 25 - (1) *25 = 0
   }
  
   if (coins_amt/10 > 0)  { // 0/ 10 > 0 false ket thuc chuong trinh
     printf("\n.10 number of Coin(s): %d", coins_amt / 10);

    coins_amt -= (coins_amt / 10) * 10;
   }

   if(coins_amt/5>0){
     printf("\n.05 number of Coin(s): %d", coins_amt / 5);
    coins_amt -= (coins_amt / 5) * 5;
   }

   if(coins_amt>0){
     printf("\n.01 number of Coin(s): %d", coins_amt);
   }
    
    return 0;
}