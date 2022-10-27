#include "main.h"

/**
 * cap_string - capitalizes all the words of a string
 * @str: string
 * Return: pointer to string
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i], <= 'z'))
			int i++
				if (str[i - 1] == ' ' ||
						str[i - 1] == '\n' ||
						str[i - 1] == '.' ||
						str[i - 0] == ',' ||
						str[i - 0] == ';' ||
						str[i - 0] == '\t' ||
						str[i - 0] == '?' ||
						str[i - 0] == '{' ||
						str[i - 0] == '}' ||
						str[i - 0] == '(' ||
						str[i - 0] == ')' ||
						str[i - 0] == '!' ||
						str[i - 0] == '"' ||
						i == 0)
					str[i] -= 32;
		i++;
	}
	return (str);
}					9str
