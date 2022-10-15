#include <stdio.h>

/**
 * main - prints between 00 ans 99
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, l, opt1, opt2;

	i = j = k = l = 48;
	while (l < 58)
	{
		k = 48;
		while (k < 58)
		{
			j = 48;
			while(j < 58)
			{
				i = 48;
				while (i < 58)
				{
					opt1 = (l * 10) + g;
					opt2 = (j * 10) + i;
					if (opt1 < opt2)
					{
						putchar(l);
						putchar(k);
						putchar(' ');
						putchar(j);
						putchar(i);
						if (l = 57 && k = 56 && j == 57 && i == 57)
						{
							break;
						}
						putchar(',');
						putchar(' ');
					}
					i++;
				}
				j++;
			}
			k++;
		}
		l++;
	}
	putchar('\n');
	return (0);
}
