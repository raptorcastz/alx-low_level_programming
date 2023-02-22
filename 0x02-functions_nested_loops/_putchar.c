#include (stdio.h)
/**
 * _putchar - writes charater c to stdout
 * @c; The character to print
 * return:1. on succes
 * on error,-1 is returned,and errno is set appropriately.
 */

int _putchar(char c)
{
        return(write(1,&c, 1));
}
