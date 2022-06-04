#include<stdio.h>


int main(void)
{
for (char i = '0'; i <= '8'; i++)
{
for (char j = '1'; j <= '9'; j++)
{
putchar(i);
putchar(j);
if (!(i == '8' && j == '9'))
putchar(',');
putchar(' ');
}
}

return (0);
}