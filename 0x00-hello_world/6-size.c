#include<stdio.h>
main - Entry point
/**
 * main - Entry point
 *
 * Return: Always (0)
 */
int main(void)
{
	int a;
	char b;
	long c;
	long long d;
	float c;

	printf("Size of char: %lu byte(s)\n", sizeof(char));
	printf("Size of int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu  byte(s)\n, sizeof(long int));
	printf("Size of a long long int : % lu byte(s)\n", sizeof(long long int));
	printf("Size of a float : % lu  byte(s)\n", sizeof(float));
	return (0);
}
