#include<stdio.h>
int main()
{   printf("Enter the tables upto which u want");
    int i,j,n ;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {  for(j=1;j<=n ;j++)
       {
           printf("%d * %d = %d  ",i,j,i*j);

        }
    printf("\n");
    }
    return 0 ;
}    