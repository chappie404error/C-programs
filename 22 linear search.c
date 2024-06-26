

#include<stdio.h>
#include<stdlib.h>
int main()
{   
 
	int arr[20];   
	int i, n, key;
	printf("\nEnter the size of the array: ");
	scanf("%d", &n);
   
    printf("\nEnter the array Elements : \n");
	for(i=0 ;i<n; i++) 
	{
		scanf("%d",&arr[i]);
	}
    
    printf("\nEnter the key element to be searched : ");
    scanf("%d",&key);

     
	for(i=0 ;i<n; i++)
	{
		if(arr[i] == key)
		{
			printf("\n Search successful and key found in position %d",i+1);
			exit(0);
		}	 
	}

    printf("\nSearch Unsuccessful\n");
		
}  
