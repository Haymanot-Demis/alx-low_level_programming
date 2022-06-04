#include<stdio.h>
#include<stdlib.h>

/**
 *main - prints all the numbers of base 16 in lowercase using only putchar
 *
 *Description: a program that prints all the numbers of base 16 in lowercase
 *Return: 0
*/

int main(void)
{
int a = '0';

while (a <= '9')
{
putchar(a);
a++;
}

a = 'a';

while (a <= 'f')
{
putchar(a);
a++;
}
putchar('\n');

return (0);
}
