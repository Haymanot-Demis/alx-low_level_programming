#include "main.h"

void print_alphabet_x10(void)
{
int j = 0;
char i ='a';

for (j = 0; j < 10; j++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}

int main(void)
{
print_alphabet_x10();

return (0);
}
