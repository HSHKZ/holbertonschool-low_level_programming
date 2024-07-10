#include <stdlib.h>
#include "main.h"

/**
 * count_words - Helper function to count the number of words in a string.
 * @str: The string to evaluate.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
	int count = 0, in_word = 0;

	while (*str)
	{
		if (*str == ' ')
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
	char **words, *word_start;
	int i, j, len, word_count, word_len;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	i = 0;
	while (*str)
	{
		while (*str == ' ')
			str++;
		if (*str == '\0')
			break;
		word_start = str;
		word_len = 0;
		while (*str != ' ' && *str != '\0')
		{
			word_len++;
			str++;
		}
		words[i] = malloc((word_len + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}
		for (len = 0; len < word_len; len++)
			words[i][len] = word_start[len];
		words[i][word_len] = '\0';
		i++;
	}
	words[i] = NULL;

	return (words);
}
