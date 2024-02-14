#include<stdio.h>
void  main()
{
 int character,vowel;
 char ch;
 scanf("%c",&ch);
 character=((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'));
 vowel=(ch=='a'|| ch=='e'|| ch=='i' ||ch=='o'|| ch=='u'|| ch=='A'|| ch=='E' || ch=='I' || ch=='O' ||   ch=='U');
 switch(character)
   {
    case 1:
    switch(vowel)
    {
     case 1:
      printf("Vowel");
     break;
     case 0:
     printf("Consonant");
     break;
    }
    break;
    case 0:
    printf("Not in alphabet");

   }
}

