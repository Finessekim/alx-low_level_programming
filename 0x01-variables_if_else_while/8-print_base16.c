#include <stdio.h>
/**
 * main - prints numbers of base sixteen
 *
 * Return: 0 (success)
 */
int main(void)
{
	int ch;
	char ch;

	for (ch = 48; ch < 58; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
