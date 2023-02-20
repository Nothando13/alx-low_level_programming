#include <stdio.h>

/**
 * main - prints all the numbers base 16 in lowecase,
 * followed by a new line 
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char ch;

	for(n=48;n<58; n++)
	{
	   purchar(n);
	}
     	for(ch ='a', ch<= 'f'ch++)
	{
		purchar(ch);
	}
	putchar('\n');
	return(0);
}
