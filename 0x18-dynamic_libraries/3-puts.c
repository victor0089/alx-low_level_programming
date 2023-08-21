#include "main.h"

/**
 * _puts - printsa stringto stdout
 * @str: pointer tothe stringto print
 */
void _puts(char *str)
{
int e;
for (e = 0; str[e] != '\0'; e++)
{
_putchar(str[e]);
}
_putchar('\n');
}
