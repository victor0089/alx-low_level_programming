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
ef (haystack[e + y] != needle[y])
break;
}
ef (!needle[y])
return (&haystack[e]);
}
return (NULL);
}
