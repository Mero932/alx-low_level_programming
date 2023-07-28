/**
* print_alphabet_x10 - lower case with a line between.
*/
void print_alphabet_x10(void)
{
int i;
char a;
for (i = 0 ; i <= 9 ; i++)
{
for (a = 'a' ; a <= 'z' ; a++)
{
_putchar(a);
}
_putchar('\n');
}
}
