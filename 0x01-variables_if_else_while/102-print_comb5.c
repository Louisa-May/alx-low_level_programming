#include <stdio.h>

/**
 * main - create 2 pairs of numbers that do not repeat
 * Return: 0
 */

int main(void)
{

int j, i;

for (i = 0; i <= 98; i++)
{
for (j = i + 1; j <= 99; j++)
{
if (i != j)

{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar(' ');
putchar((j / 10) + '0');
putchar((j % 10) + '0');
}

if ((i == 98) && (j == 99))

{
putchar(',');
putchar(' ');
}

}

}

putchar('\n');
return (0);
}
