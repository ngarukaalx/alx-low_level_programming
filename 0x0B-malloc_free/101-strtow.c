#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_WORDS 100
#define MAX_WORD_LENGTH 50

/**
 * strtow - splits a string into words.
 * @str:to be split
 *
 * Return: splited string
 */

char **strtow(char *str)
{
	char **words;

	int word_len;

	int num_words = 0;

	char *word;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	words =  malloc(sizeof(char *) * (MAX_WORDS + 1));
	if (words == NULL)
	{
		return (NULL);
	}
	word = strtok(str, " ");
	while (word != NULL && num_words < MAX_WORDS)
	{
		word_len = strlen(word);
		if (word_len > MAX_WORD_LENGTH)
		{
			free(words);
			return (NULL);
		}
		words[num_words] = strdup(word);
		if (words[num_words] == NULL)
		{
			free(words);
			return NULL;
		}
		num_words++;
		word = strtok(NULL, " ");
	}
	words[num_words] = NULL;
	return (words);

}
