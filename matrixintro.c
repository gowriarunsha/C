//matrix question 1
#include<stdio.h>
int main()
{
	int arr1[5][5],i,j;
    printf("Input elements in the matrix:\n");
 	for(i=0;i<5;i++)
 	{
      for(j=0;j<5;j++)
      {
         scanf("%d",&arr1[i][j]);
      }
    }  
 
	printf("The matrix is:\n");
 	  for(i=0;i<5;i++)
   	{
   	   printf("\n");
   	   for(j=0;j<5;j++)
  	         printf("%d\t",arr1[i][j]);
  	 }
	printf("\n");
	printf("Fourth row:\n")
	for(i=0;i<5;i++)
		printf("%d\t",arr1[4][i]);
	printf("\n");
	printf("Third column elements;\n");
	for(i=0;i<5;i++)
		printf("%d\n",arr1[i][3]);
	printf("Diagonal elements:\n")
	for(i=0;i<5;i++)
		printf("%d\t",arr1[i][i]);
	printf("\n");
	

}