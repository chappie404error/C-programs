#include<stdio.h>
#include<stdlib.h>

void main()
{


    int a;
    printf("enter the number\n");
    scanf("%d",&a);

    // using ternary 


    ((a%2)==0)?printf("number %d is even \n",a):printf("number %d is odd \n",a);


    // using if

    if ((a%2)==0)
    {
        printf("number %d is even \n",a);
    }
    else{
        printf("number %d is odd \n",a);
    }
    

    
}
