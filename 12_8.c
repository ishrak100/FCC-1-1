
#include<stdio.h>
void main()
{
   int i,n,count=0;
   scanf("%d",&n);
   for(i=2;i<n;i++)

   {
     if(n%i==0)
     count++;
     break;
   }

   if(count==0)

    printf("Prime Number");

  else printf("Not Prime");

}
