#include "monty.h"
/**
 * IsNum - checks if the string is a number of not
 * @s: string to be checked
 * Return: 0 if it's not a number, 1 if it is.
*/
int IsNum(char *s)
{
	int j = 0;

	while (s[j])
	{
		if (j == 0 && s[j] == '-' && s[j + 1])
		{
			j++;
			continue;
		}
		if (s[j] < '0' || s[j] > '9')
		{
			return (0);
		}
		j++;
	}
	return (1);
}
