#include<stdio.h>
int u , t, a ;
float distance(int u ,int t,int a)
{
    float d ;
    d = u*t+((t*t)*a)*1/2 ;
    return d ;
}
int main()
{
 printf("enter the velocity,time,accleration");
 float s;
 scanf("%d%d%d",&u,&t,&a);
 s = distance(u,t,a);
 printf("%.2f",s);
 return 0 ;
}