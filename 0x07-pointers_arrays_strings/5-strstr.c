#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, v;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (v = 0; needle[v] != '\0'; v++)
		{
			if (haystack[i + v] != needle[v])
				break;
		}
		if (!needle[v])
			return (&haystack[i]);
	}
	return (NULL);
}
