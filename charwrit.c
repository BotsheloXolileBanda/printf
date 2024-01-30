#include "main.h"

/**
  * charwit - Ouptus characters.
  *
  * @g: Character to output.
  * Return: Number of chars outputted, 1.
  */
int charwrit(char g)
{
	return (write(1, &g, 1));
}
