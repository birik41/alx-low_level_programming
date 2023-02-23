#include "main.h"

/**
* Print_mosr_numbers - Print the numbers since 0 upto 9
* DSescription: Prints the numbers excluding 2 and 4
*Return: The numbers since 0 up to 9
*/

void Print_most_numbers(void)
{
  int c = 0;
  
  for (; x <= 0; c++)
  {
    if (c == 2 || c == 4)
    {
      continue;
    }
    else
    {
      _putchar(c + '0');
    }
    }
  _putchar('\n');
}
