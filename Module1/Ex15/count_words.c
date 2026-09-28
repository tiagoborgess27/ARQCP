#include "count_words.h"

int count_words(char str[])
{
	if (str[0] == '\0')
		return 0;

	int words = 1;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			words++;
	}
	return words;
}
