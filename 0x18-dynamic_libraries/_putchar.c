#include <unistd.h>

/**
 * _putchar - writesthecharacter c to stdout
 * @c: The character toprint
 * Return: On success 1.
 * On error, -1 is returned, and errno is setappopriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
