#include <stdio.h>
#include <stdlib.h>

/**
 * swapping - function that swaps two integers
 * @a: first integer
 * @b: second integer
 */
void swapping(int *a, int *b)
{
        int temp;

        temp = *a;
        *a = *b;
        *b = temp;
}
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
        int a = 46;
        int b = 54;
        swapping(&a, &b);
        printf("%d, %d", a, b);
        return (0);
}
