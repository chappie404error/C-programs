#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){

    char x;
    AGAIN:
    printf("enter the alphabet \n");
    scanf("%c",&x);

    if (x <'a'|| x >'z'){
        printf("invalid character \n");
        goto AGAIN;
    }
    else{
    x = tolower(x);

    switch (x)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':printf(" the alphabet %c is a vowel \n",x);break;



    
    default:printf(" %c is a consonant \n",x);
        break;
    }

    }
    return 0;
}
