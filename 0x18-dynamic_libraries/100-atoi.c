#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
int e, t, m, lem, v, tget;
e = 0;
t = 0;
m = 0;
lem = 0;
v = 0;
tget = 0;
while (s[lem] != '\0')
lem++;
while (e < lem && v == 0)
{
if (s[e] == '-')
++t;
if (s[e] >= '0' && s[e] <= '9')
{
tget = s[e] - '0';
if (t % 2)
tget = -tget;
m = m * 10 + tget;
v = 1;
if (s[e + 1] < '0' || s[e + 1] > '9')
break;
v = 0;
}
e++;
}
if (v == 0)
return (0);
return (m);
}
