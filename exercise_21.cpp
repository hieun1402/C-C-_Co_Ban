#include<iostream>

int main(){
    int a;
    printf("input the integer: ");
    scanf("%d",&a);                          //if-elseif-else cũng kiểm tra giá trị dạng boolean của điều kiện
    if(a>=0 && a<=20){                       //Nếu giá trị điều kiện if là True thì chỉ có khối lệnh sau if sẽ được thực hiện.
        printf("range [0,20]\n");
    }
    else if(a>=21 && a<=40){                //Nếu giá trị điều kiện else if nào là True thì chỉ có khối lệnh sau if else đó sẽ được thực hiện
        printf("range [21,40]");
    }
    else if(a>=41 && a<=60){
        printf("range [41,60]");
    }
    else if(a>=61 && a<=80){
        printf("range [61,80]");
    }
    else{                                  //Nếu tất cả điều kiện của if và if else là False thì chỉ có khối lệnh sau else sẽ được thực hiện.
        printf("error because the number is negative and greater than 80 ");
    }
    return 0;
}