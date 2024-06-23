#include<stdio.h>
#include<stdlib.h>

void main()
{


    int a,b,c,big;
    printf("enter the numbers\n");
    scanf("%d%d%d",&a,&b,&c);

    big = (a>b)?a :b;
    big = (big>c)?big:c;

    printf("the biggest number is %d ",big);



}
