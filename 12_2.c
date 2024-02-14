
#include<stdio.h>
void main()
{

 float a,b,c,s,area;
 scanf("%f%f%f",&a,&b,&c);
 area=sqrt(s*(s-a)*(s-b)*(s-c));
 if((a+b<=c)||(b+c<=a)||(c+a<=b))
    printf("no triangle possible");
 else printf("%0.1f",area);
}
