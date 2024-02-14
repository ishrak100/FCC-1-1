
#include <stdio.h>
void main()
{
  float a,b,c,d,max1,max2,min1,min2;
  scanf("%f %f %f %f",&a,&b,&c,&d);
  if (a > b)
    {
    max1 = a;
    max2 = b;
  }
   else
  {
    max1 = b;
    max2 = a;
  }

  if
    (c > max1)
    {
    max2 = max1;
    max1 = c;
  }
  else if (c > max2)
  {
    max2 = c;
  }

  if (d > max1)
    {
    max2 = max1;
    max1 = d;
  }
  else if (d > max2)
    {
    max2 = d;
  }

  if (a < b)
    {
    min1 = a;
    min2= b;
  }
  else {
    min1 = b;
    min2 = a;
  }

  if (c < min1)
    {
    min2= min1;
    min1 = c;
  }
   else if (c < min2)
  {
    min2=c;
  }

  if (d < min1)
    {
    min2 = min1;
    min1 = d;
  }
  else if (d < min2)
    {
    min2= d;
  }
printf("%0.1f %0.1f %0.1f %0.1f",min1,min2,max2,max1);

}
