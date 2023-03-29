#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares 2 strings
 * @s1: string 1 input
 * @s2: string 2 input
 *
 * Return: 0 if s1 & s2 are equal
 *	negative integer if the stopping character in s1
 *		is less than that of s2
 *	positive integer if the stopping character in s1
 *		is greater than that of s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, r;

	/**
	 * iterate through src &
	 * compare it with dest
	 */
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		/**
		 * if they differ by a single character
		 * stop the iteration
		 */
		if (s1[i] != s2[i])
		{
			/**
			 * return the difference between
			 * the two characters
			 */
			r = s1[i] - s2[i];
			break;
		}
		else
		{
			r = s1[i] - s2[i];
		}
		i++;
	}
	return (r);
}
