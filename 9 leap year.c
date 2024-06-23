#include<stdio.h>
#include<stdlib.h>
void main(){
    system("cls");
    int year;
    printf("enter the number\n");
    scanf("%d",&year);

    (year%100!=0 && year%4==0 || year%400==0)?printf("is a leap year\n"):printf("not a leap year\n");


}
