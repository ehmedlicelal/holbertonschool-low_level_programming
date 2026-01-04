#include <stdlib.h>

/**
 * count_words - counts number of words in a string
 * @str: string to check
 *
 * Return: number of words
 */
int count_words(char *str)
{
	int i = 0, words = 0;

	while (str[i])
	{
		if (str[i] != ' ' &&
		    (str[i + 1] == ' ' || str[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to array of strings, or NULL
 */
char **strtow(char *str)
{
	char **words;
	int i = 0, j = 0, k, start, len, wc;

	if (str == NULL || *str == '\0')
		return (NULL);

	wc = count_words(str);
	if (wc == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (wc + 1));
	if (words == NULL)
		return (NULL);

	while (str[i] && j < wc)
	{
		while (str[i] == ' ')
			i++;

		start = i;
		len = 0;

		while (str[i] && str[i] != ' ')
		{
			len++;
			i++;
		}

		words[j] = malloc(sizeof(char) * (len + 1));
		if (words[j] == NULL)
		{
			while (j >= 0)
				free(words[j--]);
			free(words);
			return (NULL);
		}

		for (k = 0; k < len; k++)
			words[j][k] = str[start + k];
		words[j][k] = '\0';
		j++;
	}

	words[j] = NULL;
	return (words);
}
