#include<stdio.h>


void main(){
     
    int num;
    printf("enter the number");
    scanf("%d",&num);

    num>0?printf("positive number\n"):printf("number is negative\n");


    // using if 
    if (num>0){
        printf("number is postive");
    }   
    else{
        printf("number is negative");
    }
}
