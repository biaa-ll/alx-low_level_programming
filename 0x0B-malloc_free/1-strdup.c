#include "main.h"
#include <stdlib.h>
/**
 *_strdup - allocate a string.
 *@str: string.
 *Return: pointer to string if success.
 */
char *_strdup(char *str)
{
  int i;
  
  char *str1;
  

  
  if (str == NULL)
    
    return (NULL);
  

  
  for (i = 0; str[i]; i++)    
;  
i++;
str1 = malloc(sizeof(char) * i);
if (str1 == NULL)
return (NULL);
