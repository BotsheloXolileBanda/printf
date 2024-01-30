#include "main.h"

/**
  * clean_bufmem - Outputs contents of a storage.
  *
  * @bufmem: Storage.
  * @x: Accesses storage.
  * Return: No value.
  */
void clean_bufmem(char bufmem[], int *x)
{
	int q;

	if (!x || (*x < 0))
	{
		return;
	}
	else
	{
		for (q = 0; q < *x; q++)
		{
			charwrit(bufmem[q]);
		}
		*x = 0;
	}
}
