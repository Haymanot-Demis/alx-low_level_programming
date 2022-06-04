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
for (int a = a; a < 97; a++)
{
    putchar(a);
}

return (0);
}
