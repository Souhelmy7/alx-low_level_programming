#include "main.h"
/**
*  puts_half - function that print half of a string
* @str: the pointer that holds the string
*/
void puts_half(char *str)
{
int len = 0;
int i;
while (str[len] != '\0')
{
len++;
}
i = (len - 1) / 2 + 1;
while (i < len)
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}

