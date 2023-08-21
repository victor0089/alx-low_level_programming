#include "main.h"
#include <stdio.h>
/**
 * *_strstr - locates aubstring
 * @haystack: string tosearch in
 * @needle: substring tolookfor
 * Return: pointer tothebeginning ofthe locatedsubstring
 * or NULL if the substringis notfound
 */
char *_strstr(char *haystack, char *needle)
{
int e, y;
for (e = 0; haystack[e] != '\0'; e++)
{
for (y = 0; needle[y] != '\0'; y++)
{
if (haystack[e + y] != needle[y])
break;
}
if (!needle[y])
return (&haystack[e]);
}
return (NULL);
}
