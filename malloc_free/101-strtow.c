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
 * free_words - frees allocated memory on failure
 * @words: array of strings
 * @index: last allocated index
 */
void free_words(char **words, int index)
{
	while (index >= 0)
		free(words[index--]);
	free(words);
}

/**
 * fill_words - fills array with words
 * @words: array to fill
 * @str: source string
 * @wc: word count
 *
 * Return: 1 on success, 0 on failure
 */
int fill_words(char **words, char *str, int wc)
{
	int i = 0, j = 0, k, start, len;

	while (str[i] && j < wc)
	{
		while (str[i] == ' ')
			i++;

		start = i;
		len = 0;

		while (str[i] && str[i] != ' ')
			len++, i++;

		words[j] = malloc(sizeof(char) * (len + 1));
		if (words[j] == NULL)
			return (0);

		for (k = 0; k < len; k++)
			words[j][k] = str[start + k];
		words[j][k] = '\0';
		j++;
	}
	words[j] = NULL;
	return (1);
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
	int wc;

	if (str == NULL || *str == '\0')
		return (NULL);

	wc = count_words(str);
	if (wc == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (wc + 1));
	if (words == NULL)
		return (NULL);

	if (!fill_words(words, str, wc))
	{
		free_words(words, wc - 1);
		return (NULL);
	}

	return (words);
}
