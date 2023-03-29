#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes every word of a string
 * @s: pointer to char input array
 *
 * Return: @s
 */

char *cap_string(char *s)
{
	int i = 0;

	/* iterate through array*/
	while (s[i] != '\0')
	{
		/*check for any lowercase letters*/
		if (s[i] >= 97 && s[i] <= 122)
		{
			/**
			 * if there is a null character
			 * change its value to capital
			 */
			if (i == 0)
			{
				s[i] -= 32;
			}
			/**
			 * if there is any character matching the below b4 any small
			 * letter, change that value to capital letter.
			 */
			if (s[i - 1] == 32 || s[i - 1] == 9 || s[i - 1] == 10 ||
					s[i - 1] == 44 || s[i - 1] == 59 || s[i - 1] == 46 ||
					s[i - 1] == 33 || s[i - 1] == 63 || s[i - 1] == 34 ||
					s[i - 1] == 40 || s[i - 1] == 41 || s[i - 1] == 123 ||
					s[i - 1] == 124)
			{
				s[i] -= 32;
			}
		}
		i++;
	}
	return (s);
}
