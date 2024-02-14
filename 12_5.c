#include<stdio.h>
void main()
{
float u;
scanf("%f",&u);
if(u<=50)
  printf("%f",u*4);
 else if(u>50&&u<=80)
  printf("%f",50*4+(u-50)*3);

else if(u>80&&u<=100)
  printf("%f",50*4+30*3+(u-80)*2);

else if(u>100)
  printf("%0.1f",50*4+30*3+20*2+(u-100)*1);

}

