#include<stdio.h>
#include<stdlib.h>

void main()
{


    unsigned short int a,b,c,d,e,f,g,h,n;
    printf("enter two numbers\n");
    scanf("%hu%hu",&a,&b);

    c =a&b;
    printf("%d bitwise AND %d is %d \n",a,b,c);
    d =a|b;
    printf("%d bitwise OR %d is %d\n",a,b,d);
    e =~a;
    printf("bitwise COMPLEMENT of %d is %d \n",a,e);
    n =1;
    f = a>>n ;
    printf("%d bitwise right shift by %d is %d \n",a,n,f);
    n = 1;
    g = a<<n ;
    printf("%d bitwise left shift by %d is %d \n",a,n,g);
    h =a^b;
    printf("%d bitwise XOR  %d is %d \n",a,b,h);


    
}
