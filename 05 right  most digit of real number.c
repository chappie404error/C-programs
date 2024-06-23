#include<stdio.h>
#include<math.h>

void main(){
     
    int wn,digit;
    float rn;

    printf("enter the floating number");
    scanf("%f",&rn);

    wn = rn;
    digit = wn%10;

    printf("the right most digit is %d",digit);
    
    
}
