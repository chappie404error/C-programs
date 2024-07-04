// program to check whether the given matrix is Symmetric or not

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
 int mat[5][5],i,j,m,n;
 
 printf("Enter the order of the matrix\n");
 scanf("%d%d",&m,&n);

 // Check for compatability of row and column

 if(m!=n)
 {
  printf("\n Not a Square matrix hence it cannot be Symmetric\n");
  exit(0);
 }


 printf("\nEnter the elements for matrix\n");
 for(i=0;i<m;i++)
  {
   for(j=0;j<n;j++)
   {
     scanf("%d",&mat[i][j]);
   }
  }



// To find symmetric 
 for(i=0;i<n;i++)
  {
   for(j=0;j<m;j++)
   {
     if(mat[i][j]!=mat[j][i])
     {
      printf("\nIts not Symmetric\n");
      exit(0);
     }
   }
  }
 
printf("The given matrix is Symmetric\n");
} 
