//Binary search

#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a[20],i,j,flag,key,low,n,high,mid,temp;
  printf("\n Enter the size of the array\n");
  scanf("%d",&n);
  AGAIN:
  printf("\nEnter %d array elements :\n",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }

  // To check whether the elements are in sorted order
  flag =0;
  for(i=0;i<n-1;i++)  // Number of passes
 { 
  for(j=0;j<n-1-i;j++) // Number of comparisons for each pass
  { 
    if(a[j]>a[j+1])
      { 
        flag=1;
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
  } 
  if(flag==1)
    { 
      printf("Enter the array elements in sorted order!!!");
      goto AGAIN;
    }
}

 
  printf("Enter the key to be searched\n");
  scanf("%d",&key);
  
  low=0;
  high=n-1;
  while(low<=high)
  {
    mid=(low+high)/2;
    if(key==a[mid])
     {
       printf("\nSearch Successful and found in position %d", mid);
       exit(0);
     }
     if(key>a[mid])
      low=mid+1;
     else
      high=mid-1;
   }
  printf("\nUnsuccessful Search\n");
}
