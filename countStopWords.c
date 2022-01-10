#include "headerA3.h"

void countStopWords(tweet * tweetList)  {
        int words = 0;
        int list = 0;
        int i;
        char word[25][10];

        // Defining stop words

        strcpy(word[0], " a ");
        strcpy(word[1], " an ");
        strcpy(word[2], " and ");
        strcpy(word[3], " are ");
        strcpy(word[4], " as ");
        strcpy(word[5], " at ");
        strcpy(word[6], " be ");
        strcpy(word[7], " by ");
        strcpy(word[8], " for ");
        strcpy(word[9], " from ");
        strcpy(word[10], " has ");
        strcpy(word[11], " he ");
        strcpy(word[12], " in ");
        strcpy(word[13], " is ");
        strcpy(word[14], " it ");
        strcpy(word[15], " its ");
        strcpy(word[16], " of ");
        strcpy(word[17], " on ");
        strcpy(word[18], " that ");
        strcpy(word[19], " the ");
        strcpy(word[20], " to ");
        strcpy(word[21], " was ");
        strcpy(word[22], " were ");
        strcpy(word[23], " will ");
        strcpy(word[24], " with ");

        //Looking for the stop words

        while (tweetList != NULL)       {
                for (i = 0; i < 25; ++i)        {
                        if (strstr(tweetList->text, word[i]))      {
                                words++;
                        }
                }
                ++list;
                tweetList = tweetList->next;
        }

        printf("Across %d tweets, %d stop words were found.\n", list, words);
}

