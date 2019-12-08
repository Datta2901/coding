#include<stdio.h>
int main()
{
    printf("Enter the number");
    int n,a,b,c,i ;
    char A,B,C,D,E,F,I ;char s[10];
    scanf("%d",&n);
for(i=0,a=0,c=0;n>0;i++,n=n/16)
{
        a=n/16 ;
        b=n%16 ;
    if(b >=10)
       {
        
    if(b==10)
        {
          s[i]= A ;
          printf("A");
           printf("the required hexa decimal number is %C\n",s[i]);
        }
     else if(b==11)
         {
           s[i] =B ;
         printf("the required hexa decimal number is %C\n",s[i]);
         }
     else if(b==12)
        { 
           s[i] =C ;
         printf("the required hexa decimal number is %C\n",s[i]);
         }
     else if(b==13)
        {
           s[i]=D ;
        printf("the required hexa decimal number is %C\n",s[i]);
       }
     else if(b==14)
       { 
           s[i]=E ;
         printf("the required hexa decimal number is %C\n",s[i]);
        }
    else if(b==15)
        { 
            s[i]= F ;
         printf("the required hexa decimal number is %C\n",s[i]);
        }
    }
   else
        {

            s[i] = b ;
            printf("the required hexa decimal number is %d %d\n",s[i],i);
       }
    
}
printf("111 %s",s[10]);
return 0 ;
}