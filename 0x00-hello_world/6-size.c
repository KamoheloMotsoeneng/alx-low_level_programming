#include <stdio.h>

/**
 * main - A program that prints the size of various types on the computer
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int a;
	char b;
	long c;
	long long d;
	float e;

	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));

	return (0);
}
