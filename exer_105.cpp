#include<iostream>

int main(){
 float x , p_avg , n_avg , temp_p = 0 , temp_n = 0;
 int i , p_ctr = 0 , n_ctr = 0;
 printf("Input 7 number (int/float): ");
 for(i=0 ; i<7 ; i++){
    scanf("%f", &x);
    if(x>0){
        p_ctr++;  // đếm các số dương đã input vào
        temp_p = temp_p + x; // tính tổng các số dương đã input vào

    }
    if(x<0){
        n_ctr++;  // đếm các số âm đã input
        temp_n = temp_n + x; // tính tổng các số âm đã input vào
    }
 }

 p_avg = temp_p / p_ctr;
 n_avg = temp_n / n_ctr;

if (p_ctr>0)
{
   printf("\n%d Number of positive numbers: ", p_ctr);
   printf("Average %.2f\n", p_avg);
}

if (n_ctr>0)
{
printf("\n%d Number of negative numbers: ", n_ctr);
printf("Average %.2f\n", n_avg);
}
    return 0;
}