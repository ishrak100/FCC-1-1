#include<stdio.h>
void main()
{
  int n,temp,rem,s=1;
  scanf("%d",&n);
  temp=n;
  while(temp!=0)
  {
    rem=temp%10;
    s=s*rem;
    temp=temp/10;
  }
if(s==n)
    printf("Armstrong Number");

 else printf("Not Armstrong");



}

