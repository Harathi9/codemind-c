
#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if((c=='A'||c=='a')||
    (c=='E'||c=='e')||(c=='I'||c=='i')||
    (c=='U'||c=='u'))
   {
       printf("Vowel");
   }
   else
   {
       printf("Consonant");
   }
   return 0;
}
