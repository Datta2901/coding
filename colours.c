#include<stdio.h>
int main()
{  char s1[6] ,s2[6] ;
  printf("Enter a sting1");
  scanf("%s",s1);
  printf("enter a sting2");
  scanf("%s",s2);
char col[2][10] = {s1,s2};
  int i ,j ;
  for(i=0;i<2;i++)
  {   printf("\n%s",*(col+i));
      j=0 ;
      while(*(*(col+i)+j)!='\0')
      {
          printf("  %c",*(*(col+i)+j));
          j++;
      }
  }
printf("\n");
return 0  ;
}