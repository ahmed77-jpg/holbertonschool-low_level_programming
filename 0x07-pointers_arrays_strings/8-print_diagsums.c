#include <stdio.h>
#include "holberton.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
int i;

unsigned int diag1, diag2;

diag1 = 0;
diag2 = 0;

for (i = 0; i < size; i++)
{
diag1 += a[(size * i) + i];
diag2 += a[(size * (i + 1)) - (i + 1)];
}
printf("%d, %d\n", diag1, diag2);
}
