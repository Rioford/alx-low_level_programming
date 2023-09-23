#include "main.h"
/**
 *cap_string - function that capitalizes all words of a string.
 *@s: pointer to string.
 *
 *Return: pointer to s.
 */
char *cap_string(char *s)
{
	int z;

/* scan through string */
	z = 0;
	while (s[z] != '\0')
	{/* if next character after count is a char , capitalize it */
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		if (s[z] == ' ' || s[z] == '\t' || s[z] == '\n'
			|| s[z] == ',' || s[z] == ';' || s[z] == '.'
			|| s[z] == '.' || s[z] == '!' || s[z] == '?'
			|| s[z] == '"' || s[z] == '(' || s[z] == ')'
			|| s[z] == '{' || s[z] == '}')
		{
			if (s[z + 1] >= 97 && s[z + 1] <= 122)
			{
				s[z + 1] = s[z + 1] - 32;
			}
		}
		z++;
	}
	return (s);
}
