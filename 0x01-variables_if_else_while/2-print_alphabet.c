#include<stdio.h>
#include<stdlib.h>

/**
 *main - Prints lowercase letters using only putchar
 *
 *Description: a program that prints the alphabet in lowercase
 *Return: 0
*/

int main(void)
{
char a = 'a';

if (a > 'z')
{
putchar(a - 32);
}
else
{
putchar(a);
}

return (0);
}
