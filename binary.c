#include<stdio.h>
int main()
{
    printf("Enter the number which you want to convert");
    int n,i,a,b,c,p;
    scanf("%d",&n);
    for(a=0,c=0,i=0;n>0;n=n/2)
    {
      a = n/2 ;
      b = n%2 ;
      printf("%d%d ",a,b);
      c=(10^i)*b+c ;
      printf("%d",c);
      i=i+1 ;
    }
    //printf("   The required binary number is %d\n",c);//
 return 0 ;   
}