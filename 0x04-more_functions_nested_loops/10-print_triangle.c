#include "main.h"

/**
 * print_triangle - Print triangle dependent on the parameter size.
 * @size : The height of the triangle
 * Return: Void.
 */

void print_triangle(int size)
{
int i;
int j;
int k;

for ( i = 1; i <= size; i++)
{
for (j = size - i; j > 0; j--)
{
_putchar(' ');
}
for (k = 1; k <= i; k++)
{
_putchar('#');
}
_putchar('\n');
}

}
