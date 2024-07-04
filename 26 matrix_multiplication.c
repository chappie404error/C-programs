

#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
void main()
{
   int i, j, k, m, n, p, q, a[SIZE][SIZE], b[SIZE][SIZE], c[SIZE][SIZE];
     
   printf("\nEnter the Size of Matrix-A : ");
   scanf("%d%d",&m, &n );

   printf("\nEnter the Size of Matrix-B : ");
   scanf("%d%d",&p,&q );

   if ( n != p )
   {
      printf("\nInvalid array size, Multiplication is not possible...");
      exit(0);
   }

   printf("\nEnter the %d elements to the Matrix-A : \n", m*n);
   for(i=0; i<m ; i++)
   {
      for(j=0; j<n ; j++)
      {
	 scanf("%d", &a[i][j]);
      }
   }

   printf("\nEnter the %d elements to the Matrix-B : \n", p*q);
   for(i=0; i<p ; i++)
   {
      for(j=0; j<q ; j++)
      {
	 scanf("%d", &b[i][j]);
      }
   }

   /* Multiplication of MAT-A with MAT-B, assigns result to the MAT-C*/

   for(i=0; i<m ; i++)
   {
      for(j=0; j<q ; j++)
      {
	 c[i][j] = 0 ;
	 for(k=0 ; k<n ; k++)
	 {
	    c[i][j] = c[i][j] + a[i][k] * b[k][j] ;
	 }
      }
   }

   
   printf("\nThe elements of  Matrix-A : \n");
   for(i=0; i<m ; i++)
   {
      for(j=0; j<n ; j++)
      {
	 printf("%d   ", a[i][j]);
      }
      printf("\n");
   }

   printf("\nThe elements of Matrix-B : \n");
   for(i=0; i<p ; i++)
   {
      for(j=0; j<q ; j++)
      {
	 printf("%d   ", b[i][j]);
      }
      printf("\n");
   }

   printf("\nThe resultant Matrix-C of size %d x %d : \n",m,q);
   for(i=0; i<m ; i++)
   {
      for(j=0; j<q ; j++)
      {
	 printf("%d   ", c[i][j]);
      }
      printf("\n");
   }

   
}
