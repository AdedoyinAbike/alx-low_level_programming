#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 *main - Entry point of a program
 *
 *Return - 1(indicates an error)
 */
int main(void)
{
    const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(STDERR_FILENO, message, strlen(message));
    return (1);

