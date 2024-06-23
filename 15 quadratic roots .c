#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int a,b,c ,disc;
    float root1,root2;
    AGAIN:
    printf("enter non zero coeff. : \n");
    scanf("%d%d%d",&a,&b,&c);

    if (a ==0 || b ==0 ||c ==0){
        goto AGAIN;
        

    }

    disc = pow(b,2) - 4*a*c;

    if (disc<0){
        printf("the roots are imaginary...\n");

    }
    else if (disc >0)
    {   
        printf("the roots are real and distinct \n");
        root1 = (-b + sqrt(disc))/(2*a);
        root1 = (-b - sqrt(disc))/(2*a);
        printf("the roots are %.2f and %.2f ",root1,root2);

    }
    else
    {
        root1 =(-b)/(2*a);
        root2 = root1;
        printf("the roots are real and equal \n");
        printf("the roots are %.2f and %.2f ",root1,root2);

    }
    




    return 0;
}
