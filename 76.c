#include<stdio.h>
int main()
{int i;
  char str1[5];
   char str2[5];
  fgets(str1,5,stdin);

  fgets(str2,5,stdin);
for(i=0;i<5;i++)
 {
  printf("%d\n",str2[i]);



 }



}
