# include "headerA3.h"

void saveTweetsToFile(tweet * tweetList)        {
        char * filename = malloc(sizeof(char));
        FILE * file;

        // Filename

        printf("Enter the filename where you would like to store your tweets:\n");
        scanf("%s", filename);

        // Creating File

        file = fopen(filename, "w");

        while (tweetList != NULL)       {
                fprintf(file, "%d, %s, %s", tweetList->id, tweetList->user, tweetList->text);
                tweetList = tweetList->next;
        }

        printf("Output successful!\n");

        fclose(file);
}


