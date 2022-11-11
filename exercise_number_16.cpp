#include<iostream>
int main(){
    int amount , sl;
    printf("Input the amount: ");
    scanf("%d",&amount);
    printf("there are :\n");
    sl = (int)amount/100;
    printf("%d note(s) of 100\n",sl);
    amount = amount -(sl*100);
    sl = (int)amount/50;
    printf("%d note(s) of 50\n",sl);
    amount = amount - (sl*50);
    sl = (int)amount/20;
    printf("%d note(s) of 20\n",sl);
    amount = amount-(sl*20);
    sl = (int)amount/10;
    printf("%d note(s) of 10\n",sl);
    amount = amount - (sl*10);
    sl = (int)amount/5;
    printf("%d note(s) of 5\n",sl);
    amount = amount-(sl*5);
    sl = (int)amount/2;
    printf("%d note(s) of 2\n",sl);
    amount = amount - (sl*2);
    sl = (int)amount/1;
    printf("%d note(s) of 1\n",sl);
    return 0;
}