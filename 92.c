#include<stdio.h>
void main()
{
 char x[4];int min;
 scanf("%s",&x);
 int a=x[0]-'0';
 int b=x[1]-48;
  int c=x[2]-'0';
  min=a;
  if(b<min)
        min=b;


  if(c<min)
        min=c;

  printf("%d",min);


}
