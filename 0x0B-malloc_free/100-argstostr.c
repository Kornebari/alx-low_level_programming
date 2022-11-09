#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments in the program
 * @ac: argument count
 * @av: arguments vector
 * Return: a pointer to a new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str, *s;
	int i, j, k, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		s = av[i];
		j = 0;
		while (s[j++])
			len++;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0, j = 0; i < ac && j < len; i++)
	{
		s = av[i];
		k = 0;
		while (s[k])
		{
			str[i] = s[k];
			k++;
			j++;
		}
		str[j++] = '\n';
	}
	str[i] = '\0';
	return (str);
}
