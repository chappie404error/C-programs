#include<stdio.h>


void main()
{
    int n ,rem ,sum =0,temp;
    printf("enter the number : \n");
    scanf("%d",&n);
    temp = n ;
    AGAIN:
    while(n !=0 ){
        rem = n%10;
        sum += rem;
        n =n/10;  
    }
    if(sum>9){
        n=sum;
        printf(" the sum is %d",sum);
        sum =0 ;
        goto AGAIN;
    }

    printf("final sum of reduced value is %d",sum);



}
