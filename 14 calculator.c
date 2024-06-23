#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>

int main()
{
    int a,b,c ,choice;
    int x;
    AGAIN:
    choice =0 ;

    printf("enter 2 numbers where b!=0. : \n");
    scanf("%d%d",&a,&b);
    printf("choose ur operator : \n");
    printf("1. +\n2. -\n3. /\n4. *\n5.mod\n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1 :printf("%d + %d = %d",a,b,a+b);break;
    case 2 :printf("%d - %d = %d",a,b,a-b);break;

    case 3 :if(b!=0){
        printf("%d / %d = %.2f",a,b,(float)a/b);
            }
            else{
                printf("b == 0 \n division error");
                goto AGAIN;
            }break;


    
    case 4 :printf("%d * %d = %d",a,b,a*b);break;
    case 5 :printf("%d mod %d = %d",a,b,a%b);break;

    
    default:printf("invalid choice");break;
    }


    printf("\n To continue enter 1 ,else 0 \n");


    scanf("%d",&x);

    if (x == 1){
        goto AGAIN;
    }


    return 0;
}
