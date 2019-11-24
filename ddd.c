#include<stdio.h>
int main()
{  printf("enter two number");
    int a,j,n,c,i,b;
    scanf("%d",&n);for(i=0;n>1;n=n/10,i++)
  {
    b=n/10 ;
  }
  printf("%d",i);
   for(a=0,j=0,n=n,c=0;c<i;n=n/16,c++)
 {
      a=n % 16 ;
      j=n / 16 ;
      printf("%d%d\n",a,j);
 }



    return 0 ;
}