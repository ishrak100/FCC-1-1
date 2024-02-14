
#include<stdio.h>
int main()
{

 char c;
 scanf("%c",&c);
 switch(c)
 {
  case 'A':
      printf("80-100%%");

   break;


  case 'B':
      printf("70-79%%");

   break;

  case 'C':
      printf("60-69%%");

   break;

  case 'D':
      printf("50-59%%");

   break;

   case 'F':
      printf("0-50%%");

   break;
   default:
    printf("Invalid grade");

 }

}
