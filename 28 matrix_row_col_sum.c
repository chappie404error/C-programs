// program to find the sum of each row and sum of each column

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
 int mat[5][5],i,j,m,n,rsum=0,csum=0;
 
 printf("Enter the order of the  matrix\n");
 scanf("%d%d",&m,&n);

 printf("\nEnter the elements for matrix\n");
 for(i=0;i<m;i++)
  {
   for(j=0;j<n;j++)
   {
     scanf("%d",&mat[i][j]);
   }
  }

// To find the row sum
 for(i=0;i<m;i++)
  { rsum =0;
   for(j=0;j<n;j++)
   {
     rsum= rsum + mat[i][j];
   }
   printf("\n Sum of row %d = %d",i+1,rsum);
  }
  
 // To find the column sum
 for(j=0;j<n;j++)
  { csum =0;
   for(i=0;i<m;i++)
   {
     csum= csum + mat[i][j];
   }
   printf("\n Sum of column %d = %d",j+1,csum);
  }
}
