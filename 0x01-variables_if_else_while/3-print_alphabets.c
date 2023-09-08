#include<stdio.h>
/**
 * main - program entry point
 *
 * Return: always 0
 */
int main(void)
{
	char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;
	
	while (i < 52)
	{
		putchar(alphabet[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
