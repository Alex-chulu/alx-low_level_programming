#include <unistd.h>
/**
 * main - print a text
 *
 * Description: using the main file
 * This function prints text to standard error
 * Return: Alawas 1 (Success)
 */
int main(void)
{
write(2, "and that piece of art is useful\n"
" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
