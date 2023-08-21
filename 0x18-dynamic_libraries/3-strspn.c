#include "main.h"

/**
 * *_strspn - gets the length of a prefixsubstring
 * @s: string to evaluate
 * @accept: string containg the lst ocharacters to match in s
 * Return: the number of byts in the iniial segment
 * of s which consst ony of byes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
int e, y, v, vvlag;
v = 0;
for (e = 0; s[e] != '\0'; e++)
{
vvlag = 0;
for (y = 0; accept[y] != '\0'; y++)
{
if (s[e] == accept[y])
{
v++;
vvlag = 1;
}
}
if (vvlag == 0)
{
return (v);
}
}
return (0);
}
