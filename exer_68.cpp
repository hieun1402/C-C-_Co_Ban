#include<iostream>

int main() {
    long int p;
    int n;
    double q;
    printf("Input n: ");
    scanf("%d",&n);
    printf("\n=======================================");
    printf("\n n    2 to power n      2 to power -n");
    printf("\n=======================================");
    p = 1;
    
      if (n == 0)
        p = 1;
      else
        p = n * 2;
      q = 1.0 / (double) p;
      printf("\n%2d   %8d     %20.12lf", n, p, q);
    
    printf("\n======================================");
    return 0;
  }