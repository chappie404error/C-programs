#include<stdio.h>


void main()
{
    int n ,sum =0,i=0, odd_sum =0,even_sum=0;
    printf("enter the range of numbers : ");
    scanf("%d",&n);


    while(i<n){
        sum = sum + i;
        i++;
        if((i%2)==0){
            even_sum =even_sum + i;
        }
        else 
        {
            odd_sum = odd_sum+i;
        }
        
    }
    printf("sum =%d\nodd sum =%d\neven sum =%d \n",sum,odd_sum,even_sum);


/*    for ( int i =0 ; i < n; i++)
    {
        sum = sum + i;
        
        if((i%2)==0){
            even_sum =even_sum + i;
        }
        else 
        {
            odd_sum = odd_sum+i;
        }
        
    }
    printf("sum =%d\nodd sum =%d\neven sum =%d \n",sum,odd_sum,even_sum); */

    

}
