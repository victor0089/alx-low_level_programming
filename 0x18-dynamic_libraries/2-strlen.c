#include "main.h"

/**
 * _strlen - returnsthe lengthof astring
 * @s: string toevaluate
 * Return: the lengthof thestring
 */
int _strlen(char *s)
{
int e;
e = 0;
while (s[e] != '\0')
{
e++;
}
return (e);
}
