  
  // program to find the Trace and Norm of a given matrix.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
 int mat[5][5],i,j,m,n,trace=0,norm=0;
 
 printf("Enter the order of the matrix\n");
 scanf("%d%d",&m,&n);

  printf("\nEnter the elements for matrix\n");
 for(i=0;i<m;i++)
  {
   for(j=0;j<n;j++)
   {
     scanf("%d",&mat[i][j]);
   }
  }



// Finds trace and norm if the matrix is compatable
 if(m==n)
{   
 for(i=0;i<m;i++)
  { 
   for(j=0;j<n;j++)
   {
     if(i==j){
      trace =  trace + mat[i][j];
      }
      norm = norm + (mat[i][j] * mat[i][j]);
      
   } 
  }
 printf("The trace of a given matrix is : %d\n",trace);
 printf("The norm of a given matrix is : %f\n",sqrt(norm));
}
else      // finds only norm
{
  printf("Not a square matrix ...hence trace not possible\n");

  for(i=0;i<m;i++)
  {
   for(j=0;j<n;j++)
   {
    norm = norm + (mat[i][j] * mat[i][j]);
   }
  }
printf("The norm of a given matrix is : %f\n",sqrt(norm));
}
 

} 
