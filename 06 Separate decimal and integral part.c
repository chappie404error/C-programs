#include<stdio.h>
#include<math.h>

void main(){
     
    int wn;
    float rn,dec;

    printf("enter the floating number");
    scanf("%f",&rn);

    wn = rn;
    dec = (rn- wn);

    printf("the integer part is %d and decimal part is %.2f ",wn,dec);
    
    
}
