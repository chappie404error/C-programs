#include<stdio.h>
#include<math.h>

void main(){
     
    float r , vol;

    printf("Enter the radius: ");
    scanf("%f",&r);

    vol = (4.0/3.0)*(22.0/7.0)*pow(r,3);
    printf("the volume of sphere is %.2f",vol);



}
