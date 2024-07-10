#include <stdlib.h>

int count_words(char *str);
char **allocate_memory(int num_words);
void free_memory(char **words);

/**
 * strtow - Splits a string into words.
 * @str: The input string to be split
 *
 * Return: Pointer to an array of strings (words) or NULL on failure
 */
char **strtow(char *str)
{
	int i, j, k, len, num_words;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	num_words = count_words(str);
	if (num_words == 0)
		return (NULL);

	words = allocate_memory(num_words);
	if (words == NULL)
		return (NULL);

	for (i = 0, j = 0; i < num_words; ++i)
	{
		while (str[j] == ' ')
			j++;

		len = 0;
		while (str[j + len] != ' ' && str[j + len] != '\0')
			len++;

		words[i] = malloc((len + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			free_memory(words);
			return (NULL);
		}

		for (k = 0; k < len; ++k)
			words[i][k] = str[j + k];

		words[i][k] = '\0';
		j += len;
	}

	words[i] = NULL;
	return (words);
}

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string
 *
 * Return: Number of words
 */
int count_words(char *str)
{
	int count = 0, i = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			count++;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
		}
		else
		{
			i++;
		}
	}

	return (count);
}

/**
 * allocate_memory - Allocates memory for an array of strings.
 * @num_words: Number of words
 *
 * Return: Pointer to allocated memory or NULL on failure
 */
char **allocate_memory(int num_words)
{
	char **words;

	words = malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	return (words);
}

/**
 * free_memory - Frees memory allocated for an array of strings.
 * @words: The array of strings to free
 */
void free_memory(char **words)
{
	int i;

	if (words == NULL)
		return;

	for (i = 0; words[i] != NULL; ++i)
	{
		free(words[i]);
	}

	free(words);
}
