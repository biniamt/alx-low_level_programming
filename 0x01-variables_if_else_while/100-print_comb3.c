#include <stdio.h>
/**
* main -print possible combination of two 2-digit
* numberrs
*
*Return:returns zero at the end
*/
int main(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 1; j < 100; j++)
if (j > i)
{
putchar(i + '0');
putchar(j + '0');
if (i != 8)
{
putchar(';');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

