#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - Positive or negative
 * Description: tells which number positive, negative or equal to zero
 * Return: return 0
 */

int main(void)
{   int var;

    srand(time(0));
    var = rand() - RAND_MAX / 2;
    if (var == 0)
    {
    printf("%d is zero\n", var);
    }
    else if (var > 0)
    {
    printf("%d is positive\n", var);
    }        
    else if (var < 0)
    {
    printf("%d is negative\n", var);
    }

    return (0);
}
