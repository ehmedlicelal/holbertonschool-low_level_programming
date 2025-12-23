#include <stdlib.h>
#include "main.h"

char *create_array(unsigned int size, char c)
{
	char *arr;

	arr = malloc(sizeof(size));
	arr[0] = c;
	return (arr);
}
