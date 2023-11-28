#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300
#include "tokenizing.h"

void tokenizing()
{
	/* Version 1 */
	printf("*** Start of Tokenizing Words Demo ***\n");

	// Declare variables
	char words[BUFFER_SIZE];
	char* nextWord = NULL;
	int wordsCounter;

	do
	{
		// Prompt the user to input a few words separated by space (type 'q' to quit)
		printf("Type a few words separated by space (type 'q' to quit):\n");
		fgets(words, BUFFER_SIZE, stdin);
		words[strlen(words) - 1] = '\0'; // Remove the newline character from the input

		if (strcmp(words, "q") != 0)
		{
			// Tokenize the input string using strtok
			nextWord = strtok(words, " "); // The delimiters are spaces (' ')
			wordsCounter = 1;

			// Process each token (word) until there are no more tokens
			while (nextWord)
			{
				// Print the current word along with its index
				printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord);
				nextWord = strtok(NULL, " "); // Move to the next word
			}
		}
	} while (strcmp(words, "q") != 0);

	printf("*** End of Tokenizing Words Demo ***\n\n");
}




  

