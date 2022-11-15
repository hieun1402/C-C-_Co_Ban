#include<iostream>

int main(){
int star , end , temp , count , sum=0;
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
        sum = sum+count;
    }
}
  printf("\nsum of %d to %d is %d",star,end,sum);
    return 0;
}