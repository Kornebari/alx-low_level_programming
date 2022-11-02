#include "main.h"

/**
 * _strstr - this function locates a substring
 * @haystack: the longer string to search
 * @needle: first occurence of the substring
 * Return: a pointer to the begining of substring or @NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[i] && (haystack[i]) == needle[0])
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
