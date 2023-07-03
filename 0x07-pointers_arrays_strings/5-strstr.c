#include "main.h"

/**
 * _strstr - Entry
 * @haystack: input
 * @needle: input
 * Return: 0
 */
char *_strstr(char *haysack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
