#include<stdio.h>
#include<stdlib.h>

int main()
{


    int a,b,c,temp;
    printf("enter the number : a =\n");
    scanf("%d",&a);
    temp =a ;


    b = a++;
    printf("value of a after post inc is %d \n",b);
    c = ++temp;
    printf("value of a after pre inc is %d \n",c);   

    dec();
    
    
    return 0;

    
}

void dec()
{
    
    int a,b,c,temp;
    printf("enter the number : a = "\n");
    scanf("%d",&a);
    temp =a ;
    b = a--;
    printf("value of a after post dec is %d \n",b);
    c = --temp;
    printf("value of a after pre dec is %d \n",c); 
}
