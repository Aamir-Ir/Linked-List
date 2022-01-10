# include "headerA3.h"

void loadTweetsFromFile(tweet ** tweetList)     {
        char * filename = malloc(sizeof(char));
        FILE * file;
        tweet ** node = NULL;

        // Filename

        printf("Enter a filename to load from:\n");
        scanf("%s", filename);

        // Creating File

        file = fopen(filename, "r");

        while (tweetList != NULL)       {
                fscanf(file, "%d, %s, %s", (*tweetList)->id, (*tweetList)->user, (*tweetList)->text);
                tweetList = (*tweetList)->next;
        }

        fclose(file);

}

