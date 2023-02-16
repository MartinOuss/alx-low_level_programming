#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints a quote without using printf or puts
 *
 * Return: 1 (Error code)
 */
int main(void)
{
    char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    int i = 0;

    while (quote[i])
    {
        i++;
    }
    write(2, quote, i);

    return (1);
}

