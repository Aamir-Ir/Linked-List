#include "headerA3.h"

int searchTweetsByKeyword(tweet * tweetList)    {
        char * word = malloc(sizeof(char));
        int count = 0;

        // user input

        printf("Enter a keyword to search:\n");
        scanf("%s", word);

        // Looking for the word in the linked list

        while (tweetList != NULL)       {
                if (strstr(tweetList->text, word))      {
                        printf("Match found for '%s': %s wrote: %s", word, tweetList->user, tweetList->text);
			count++;
                }
                tweetList = tweetList->next;
        }

        return count;
}

