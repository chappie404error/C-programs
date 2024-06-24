#include<stdio.h>


void main()
{
    int n ,rem ,rev =0,temp;
    printf("enter the number : \n");
    scanf("%d",&n);
    temp = n ;

    while(n !=0 ){
        rem = n%10;
        rev = (rev*10)+rem;

        n =n/10;  
    }
    if(temp==rev){
        printf("is a plaidrome");
    }
    else
    {
        printf("not a palindrome");
    }
    



}
