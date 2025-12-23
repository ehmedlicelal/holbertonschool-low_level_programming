#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - initializes 0 to 2 dimensional array
 * @width: width of array
 * @height: height of array
 *
 * Return: returns pointer to array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = (int **)malloc(height * sizeof(int *));
	if (arr != NULL)
	{
		for (i = 0; i < height; i++)
		{
			arr[i] = (int *)malloc(width * sizeof(int));
			if (arr[i] != NULL)
			{
				for (j = 0; j < width; j++)
					arr[i][j] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(arr[i]);
					i--;
				}
				free(arr);
				return (NULL);
			}
		}
		return (arr);
	}
	else
		return (NULL);
}
