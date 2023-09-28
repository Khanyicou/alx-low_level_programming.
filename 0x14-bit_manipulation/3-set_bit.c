#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: A pointer to the number to update.
 * @index: The index, starting from 0, of the bit to set.
 *
 * Return: 1 if it worked
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return (-1);

unsigned long int mask = 1UL << index;

*n |= mask;

return (1);
}