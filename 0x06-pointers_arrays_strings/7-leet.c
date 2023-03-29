#include "main.h"
#include <stdio.h>

/**
 * leet - encodes string into 1337
 * @s: string input
 * Return: @s
 */

char *leet(char *s)
{
	int i, c = 0;
	int sl[] = {97, 101, 111, 116, 108};
	int ul[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	/*iterate values of array s*/
	while (s[c] != '\0')
	{
		/**
		 * loop thru array value 5 times
		 * to check if value is equal to
		 * any small letter in array sl or
		 * capital letter in array ul and if it
		 * is, replace it with the value in array n
		 */
		for (i = 0; i < 5; i++)
		{
			if (s[c] == sl[i] || s[c] == ul[i])
			{
				s[c] = n[i];
				break;
			}
		}
		c++;
	}
	return (s);
}
