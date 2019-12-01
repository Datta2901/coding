#include<stdio.h>
int main()
{
    printf("upto which numbers you want to get the pattern");
    int n ,i,j,c ;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        for(i=0;i<j;i++)
    {
        printf("%d",i+1);
    }
    printf("\n");
    }
    return 0 ;
}