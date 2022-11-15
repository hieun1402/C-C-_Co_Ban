#include<iostream>

int main(){
int star , end , temp , count;
printf("input star : ");
scanf("%d",&star);
printf("input end : ");
scanf("%d",&end);
// if(star>end){
//     temp = star;
//     star = end;
//     end = temp;
// }
for(count=star; count<=end; count++){
    if(count%2 == 0){
        printf("%d  ",count);
    }
}
    return 0;
}