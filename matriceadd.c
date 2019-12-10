#include<stdio.h>
int main()
{  
    int i,j ;
    int A[2][3] ,B[2][3],C[2][3];
    printf("Enter the elements of [A]");
  for(i=0;i<2;i++)
  for(j=0;j<3;j++)
  scanf("%d",&A[i][j]);
  printf("Enter the elements of [B]");
 for(i=0;i<2;i++)
  for(j=0;j<3;j++)
  scanf("%d",&B[i][j]);
   for(i=0;i<2;i++)
  for(j=0;j<3;j++)
  {
      C[i][j]=A[i][j]+B[i][j] ;
      printf("%d ",C[i][j]);
  }   
printf("are the required elements of[C]");  
printf("\n");
  return 0 ; 
}