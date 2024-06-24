#include<stdio.h>


void main()
{
    int n , i =0,first =0 ,second = 1,third;
    printf("enter the range of numbers : \n");
    scanf("%d",&n);
    printf("the fibonacci series : \n");
    printf("%d\t%d\t",first,second);
    while(i+2<n ){
        
        third = first + second;
        printf("%d\t",third);   
        first = second;
        second = third;   
        i++;  
    }



}
