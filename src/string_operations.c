#include <stdio.h>

/*comment added by akhan*/
void my_w_strlent()
{
  //some function lala
}


char *my_strcpy(char *t, char *s)

{
   
   char *p = t;
   
   while (*t++ = *s++)
   ;
   
   
   return p;
   
}

size_t my_strlen(char *s)
{
   char *p = s;

   while (*p)
      ++p;

   return (p - s);
}

int main(void)
{
   int i;
   char *s[] = 

   {
      "Git tutorials",
      "Tutorials Point"
   };

   for (i = 0; i < 2; ++i)
      
   printf("string lenght of %s = %d\n", s[i], my_strlen(s[i]));

   printf("%s\n", my_strcpy(p1, "Hello, World !!!"));

   return 0;
}

