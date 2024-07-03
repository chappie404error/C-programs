// Standard Deviation

#include<stdio.h>
#include<math.h>

int main()
{
 int i,j,n;
 float a[20],mean,var,variance,std,sum;

 printf("Enter the size of the array\n");
 scanf("%d",&n);
 printf("Enter %d array elements\n",n);
 for(i=0;i<n;i++)
 {
  scanf("%f",&a[i]);
 }

 sum=0.0;
 for(i=0;i<n;i++)
 {
 sum=sum+a[i];
 }
 mean=sum/n;
 
 var=0.0;
for(i=0;i<n;i++)
 {
  var+=(a[i]-mean)*(a[i]-mean);
 }
variance=var/n;
std=sqrt(variance);

printf("\nMean = %f\n",mean);
printf("\nVariance=%f\n",variance);
printf("\nStd deviation=%f\n",std);
}





