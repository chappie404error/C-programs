// program to find the Transpose of  a given matrix

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
 int mata[5][5],mat_T[5][5],i,j,m,n;
 
 printf("Enter the order of the matrix\n");
 scanf("%d%d",&m,&n);

 printf("\nEnter the elements for matrix\n");
 for(i=0;i<m;i++)
  {
   for(j=0;j<n;j++)
   {
     scanf("%d",&mata[i][j]);
   }
  }



// To fin the Transpose of a matrix 
 for(i=0;i<n;i++)
  {
   for(j=0;j<m;j++)
   {
     mat_T[i][j]=mata[j][i];
   }
  }
 
printf("\n The resultant matrix after transposing\n");
for(i=0;i<n;i++)
  {
   for(j=0;j<m;j++)
   {
     printf("%d\t",mat_T[i][j]);
   }
    printf("\n");
  }

} 
