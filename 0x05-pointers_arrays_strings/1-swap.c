#include "main.h"
/**
 * swap_int - check the code
 * @a :pointer
 * @b :pointer
 * Return: void.
 */
void swap_int(int *a, int *b)
{
*a = *a + *b;
*b = *a - *b;
*a = *a - *b;
}
