#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a characterin astring
 * @s: string to search
 * @c: char to find
 * Return: a pointer to the firstoccurrence ofthecharacter
 * c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
int u;
while (1)
{
u = *s++;
if (u == c)
{
return (s - 1);
}
if (u == 0)
{
return (NULL);
}
}
}
