#include<stdio.h>
void main()
{
  char Operator;
  int operand1,operand2;
  float result;
  scanf("%c%d%d",&Operator,&operand1,&operand2);



    if(Operator=='+')
        result=operand1+operand2;

    else if(Operator=='*')
        result=operand1*operand2;
   else if(Operator=='/')
        result=(float)operand1/operand2;

   printf("%f",result);



}
