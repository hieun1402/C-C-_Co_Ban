#include<iostream>
#include<math.h>

// int main(){
//   int a[3] , i , j , temp;
//   printf("Input 3 number:\n");
//   for(i=0;i<3;i++){
//     scanf("%d",&a[i]); 
//   }
//   for(i=0;i<3;i++){      //i=0
//     for(j=i+1;j<3;j++){  //j=1        
//         if(a[i]>a[j]){   //0>1 false 
//             temp=a[i];
//             a[i]=a[j];
//             a[j]=temp;
//         }
//     }
//   }
//   printf("Sorted numbers:  ");
//   for(i=0;i<3;i++){
//     printf("%d ",a[i]);
//   }
//     return 0;
// }

int main(){
 int n1 , n2 , n3;
 int lowest , middle , highest;
 printf("Input 3 number: \n");
 scanf("%d%d%d",&n1,&n2,&n3);
 //n1 is the low number
 if(n1<= n2 && n1<=n3){
    lowest = n1;
    if(n2<=n3){
        middle = n2;
        highest = n3;
    }else{
        middle=n3;
        highest=n2;
    }
 }
 //n2 is the low number
 else if(n2<=n1 && n2<=n3){
    lowest=n2;
    if(n1<=n3){
        middle=n1;
        highest=n3;
    }else{
        middle=n3;
        highest=n1;
    }
 }
 //n3 is the low number
 else if(n3<=n1 && n3<=n2){
    lowest = n3;
    if(n1<=n2){
        middle=n1;
        highest=n2;
    }else{
        middle=n2;
        highest=n1;
    }
 }
 printf("Sorted numbers: %d %d %d\n",lowest,middle,highest);
 printf("desc: %d %d %d",highest,middle,lowest);
    return 0 ;
}