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
for (char i = a; i < 'z'; i++)
{
    putchar(i);
}
putchar('\n');

return (0);
}
