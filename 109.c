#include<stdio.h>
int main()
{
 int n,i;
 scanf("%d",&n);
 for(i=n-1;i>=1;i--)
  {
    if(n%i==0)
    break;

  }

 printf("%d",i);

}
