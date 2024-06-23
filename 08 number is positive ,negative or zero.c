#include<stdio.h>
#include<math.h>

void main(){
     
    int num;
    printf("enter the number");
    scanf("%d",&num);


    //ternary 

     
    num>0?printf("number is positive \n"):(num<0)?printf("number is negative\n"):printf("number is 0 \n");


    // using if 
     
    if (num>0){
        printf("number is postive\n");
    }   
    else if (num<0){
        printf("number is negative\n");
    }
    else{
        printf("number is 0 \n");

    }


    //nested if 
     
    if (num>=0){
    
    if (num>0){
        printf("number is postive\n");
    }
    else{
        printf("number is zero\n");

    }
    }
    else{
        printf("number is negative \n");

    }
    
}
