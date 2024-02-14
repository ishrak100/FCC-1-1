#include<stdio.h>
#include<math.h>
int main()
{

 int b,a,n,d,c,N,power;
scanf("%d%d%d%d%d%d",&b,&a,&n,&d,&c,&N);
power=pow(a,n);
printf("%d",((b*power)+d/c)%N);}
