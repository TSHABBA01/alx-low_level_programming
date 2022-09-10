#include <stdio.h>

/**
 *main -main block
 *Description: prints all possible three didgit numbers
 *Return: 0
 */
int main(void)
{
	int c, i, k, j;

	for (c =48; c <= 57; c++)
	{
		for (i = 48; i <= 57; i++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (j = 48; j <= 57; j++)
				{
					if (((k + j) > (c+1) && k >= c) || c < k)
					{
						putchar(c);
						putchar(i);
						putchar(' ');
						putchar(k);
						putchar(j);

					if (c + 1 + k + j ==27 && c ==57)
					{
					break;
					}else
					{
						putchar(',');
						putchar(' ')
					}
					}
				}
			}
		}
	}
	
	putchar(\n');

	return (0);
