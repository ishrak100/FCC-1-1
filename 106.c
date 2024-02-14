#include<stdio.h>
int main()
{
int x,y,lcm;
scanf("%d%d",&x,&y);
int max=(x>y)?x:y;
for(int i=max;i<=x*y;i++)
 {
  if(i%x==0 && i%y==0)
  {
    lcm=i;
    break;
  }


 }
printf("%d",lcm);


}
