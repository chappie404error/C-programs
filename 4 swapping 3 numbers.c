#include<stdio.h>
#include<math.h>

void main(){
     
    int a,b,c,temp;
    printf("enter the numbers a ,b and c");
    scanf("%d%d%d",&a,&b,&c);
    temp =a;
    a=b;
    b=c;
    c = temp;
    printf("swapped numbers a = %d and b = %d and c =%d",a,b,c);

    
}
