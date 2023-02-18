#include<iostream>

int main(){
 float price , increased_price;
 printf("Input the item price: ");
 scanf("%f",&price);
 if(100<= price && price<=400){
    increased_price = price * 0.14 ;
    price = price + increased_price ; 
    printf("New item price: %.2f\n",price); 
    printf("Increased price: %.2f\n",increased_price); 
    printf("Increase Percentage: 14%%\n"); 
 }

 else if(400<price && price<=800){
    increased_price = price * 0.11 ; 
    price = price +increased_price;
    printf("New item price: %.2f\n",price); 
    printf("Increased price: %.2f\n",increased_price); 
    printf("Increase Percentage: 11%%\n"); 
 }

 else if(800<price && price<=1200){
   increased_price = price * 0.09 ;
    price = price + increased_price ; 
    printf("New item price: %.2f\n",price); 
    printf("Increased price: %.2f\n",increased_price); 
    printf("Increase Percentage: 9%%\n"); 
 }

 else if(1200<price && price<=2000){
   increased_price = price * 0.06 ;
    price = price + increased_price ; 
    printf("New item price: %.2f\n",price); 
    printf("Increased price: %.2f\n",increased_price); 
    printf("Increase Percentage: 6%%\n"); 
 }

 else if(price>2000){
   increased_price = price * 0.03 ;
    price = price + increased_price ; 
    printf("New item price: %.2f\n",price); 
    printf("Increased price: %.2f\n",increased_price); 
    printf("Increase Percentage: 3%%\n"); 
 }
    return 0;
}