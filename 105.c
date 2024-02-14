#include<stdio.h>
int main()
{

 int x,y;
 int gcd;
 scanf("%d%d",&x,&y);
 int min=(x<y)?x:y;

 for(int i=1;i<=min;i++)
 {
   if(x%i==0 && y%i==0)
 {
  gcd=i;

 }

 }
 printf("%d",gcd);

}
