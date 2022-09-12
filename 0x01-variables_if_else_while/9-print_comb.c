#include <stdio.h>
/**
* main -print possible combination of two 2-digit
* numberrs
*
*Return:returns zero at the end
*/
int main(void)
{
int c;
for (c = '0'; c <= '9'; c++)
{
putchar(c);
if (c != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
