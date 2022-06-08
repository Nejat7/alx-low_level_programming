#include "main.h"
/**
*print_alphabet_x10 - Entry point
*ten times
*/
void print_alphabet_x10(void)
{
int alp;
int x;
for (x = 0; x < 10; x++)
{
for (alp = 'a'; alp <= 'z'; alp++)
{
_putchar(alp);
}
-putchar('\n');
}
}
