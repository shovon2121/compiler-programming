#include<stdio.h>

int main()
{
   int i=0;
   char s[100];

   gets(s);


   while(s[i] != '\0'){
    printf("%c", s[i]);
    if (s[i] == ' ')
    {
        printf("\n");
    }
    i++;
   }
}
