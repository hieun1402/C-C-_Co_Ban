#include<iostream>

int main(){
 long ctr_char=0 , ctr_line=0 , ctr_word=0;
 int c , flag=0;
 printf("Input a string: \n");
 for(; (c=getchar()) !=EOF ;){
     ctr_char++; //dòng này đếm các kí tự và khoảng trắng
    if(c=='\n'){
        ctr_line++;
    }
    if(c==' ' || c=='\n'){
        ctr_word++;
    }
    // if(c!=' ' && c!='\n'){ //dòng này chỉ đếm kí tự không đếm khoảng trắng
    //     ctr_char++;
    // }
 
 }
 printf("Number of characters:%ld\n",ctr_char);
 printf("Number of line:%d\n",ctr_line);
 printf("Number of word:%d\n",ctr_word);
    return 0;
}