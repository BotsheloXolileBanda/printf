#include "main.h"

/**
  * int_hand - Handles d and i format specifiers.
  *
  * @intedeci: The number to handle.
  * return: A pointer to the formatted output.
  */
char *int_han(int intedeci)
{
	char bufint[40];
	int x, y, g;
	char *bufinteg;

	while (intedeci < 0)
	{
		intedeci = intedeci * -1;
	}

	x = 0;

	do
	{
		bufint[x++] = (intedeci % 10) + '0';
		intedeci /= 10;
	} while (intedeci > 0);

	y = x - 1;

	bufinteg = malloc(sizeof(char) * x);
	if (!bufinteg)
	{
		return (NULL);
	}
	else
	{
		g = 0;

		while (y >= 0)
		{
			bufinteg[g++] = bufint[y--];
		}
		return (bufinteg);
	}
}
