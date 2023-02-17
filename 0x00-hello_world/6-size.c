#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %lu byte(s)\n", sizeof(unsigned long));
printf("Size of a int: %lu byte(s)\n", sizeof(unsigned long));
printf("Size of a long int: %lu byte(s)\n", sizeof(long long int));
printf("Size of a long long int: %lu byte(s)\n", sizeof(unsigned long long int));
printf("Size of a float: %lu byte(s)\n", sizeof(unsigned long));
return (0);
}
