#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *Return: Always 0 (Success/correct)
 *
 */
int main(void)
{
char lower;
char upper;
for (upper = 'A'; upper <= 'Z'; upper++)
{
putchar(upper);
}
for (lower = 'a'; lower <= 'z'; lower++)
{
putchar(lower);
}
putchar('\n');
return(0);
}
  
