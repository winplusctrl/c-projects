#include <stdio.h>
#include "cs50.h"
#include <string.h>
int main(void)

{
  int *arr;
  printf("Enter a string and I'll count how many vowels there are! ");
  string input = GetString();
  int a_vowel = 0;
  int e_vowel = 0;
  int i_vowel = 0;
  int o_vowel = 0;
  int u_vowel = 0;
  printf("%s\n", input);
  for (int i = 0; i < strlen(input); i++)
  {
    if (input[i] == 'a' || input[i] == 'A')
    {
      a_vowel++;
    }
    if (input[i] == 'e' || input[i] == 'E')
    {
      e_vowel++;
    }
    if (input[i] == 'i' || input[i] == 'I')
    {
      i_vowel++;
    }
    if (input[i] == 'o' || input[i] == 'O')
    {
      o_vowel++;
    }
    if (input[i] == 'u' || input[i] == 'U')
    {
      u_vowel++;
    }
  }
  
  printf("There are %i A vowels.\n", a_vowel);
  printf("There are %i E vowels.\n", e_vowel);
  printf("There are %i I vowels.\n", i_vowel);
  printf("There are %i O vowels.\n", o_vowel);
  printf("There are %i U vowels.\n", u_vowel);

}
