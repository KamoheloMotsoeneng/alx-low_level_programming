#include "main.h"
/**
 * main - Determines if a number is positive, negative or zero.
 *0 : is the number to be checked
 * Return: Always 0 (Success)
 */
int main(void)
{
        if (n > 0)
        {
                printf("%d is positive\n", n);
        }
        else if (n == 0)
        {
                printf("%d is zero\n", n);
        }
        else
        {
                printf("%d is negative\n", n);
        }
        return (0);
}