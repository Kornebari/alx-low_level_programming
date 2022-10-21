#include "main.h

/**
*_isupper -Checks for uppercase letters
*@c:The chracter to check
*Return:1 if character is uppercase, otherwise 0
*/

int _isupper(int c)
{
if (c>= 'A' && c <= 'Z')
return (1);
else
return (0);
}
