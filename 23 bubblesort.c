
#include<stdio.h>

int main()
{
 int a[20],i,j,n,temp,count=0,flag=0;
 printf("Enter the size of the array\n");
 scanf("%d",&n);
 printf("Enter %d array elements\n",n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }

  
count=0;
for(i=0;i<n-1;i++)  // Number of passes
 {
  for(j=0;j<n-1-i;j++) // Number of comparisons for each pass
  { count++; 
    if(a[j]>a[j+1])
      { 
        flag=1;
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
  } if(flag==0)
    { break;}
}

printf("The sorted array elements are\n");
for(i=0;i<n;i++)
 {
  printf("%d  ",a[i]);
 }
printf("\nThe number of comparison = %d",count);
}
 

