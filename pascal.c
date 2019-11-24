#include<stdio.h>
int main()
{
    printf("Enter a number");
    int n,i,j,a,b,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0,a=1,b=0;j<i;b=a,j++)
       {
           if(j<i)
            { 
              s=a+b ;
              printf("%d",s);
            }
            else
            {
                printf("1");
            }

       }
     printf("\n"); 
    }







}