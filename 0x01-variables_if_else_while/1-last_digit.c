#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;
int rem;

srand(time(0));
n = rand() - RAND_MAX / 2;
rem = n%10;
if (remm == 0)
printf("Last digit of %d is %d and is zero\n", n, rem);
else if (rem > 5)
printf("Last digit of %d is %d and and is greater than 5\n", n, rem);      
else if(rem < 6 && rem != 0)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, rem);

return (0);
}