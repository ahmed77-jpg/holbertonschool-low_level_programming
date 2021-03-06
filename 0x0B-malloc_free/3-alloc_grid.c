#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - function returns a pointer to a 2-d array of integers.
 * @width: width.
 * @height: height.
 * Return: Grid of integers initialized to 0.
 */

int **alloc_grid(int width, int height)
{
int **wh;
int heii, wii, x;

if (width <= 0 || height <= 0)
return (NULL);
wh = malloc(sizeof(int *) * height);
if (wh == NULL)
return (NULL);
for (heii = 0; heii < height; heii++)
{
wh[heii] = malloc(sizeof(int) * width);
if (wh[heii] == NULL)
{
for (x = 0; x < heii; x++)
free(wh[x]);
free(wh);
return (NULL);
}
}

for (heii = 0; heii < height; heii++)
{
for (wii = 0; wii < width; wii++)
wh[heii][wii] = 0;
}

return (wh);
}
