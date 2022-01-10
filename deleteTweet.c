#include "headerA3.h"

void deleteTweet(tweet ** tweetList)    {
        int choice;
        int itr = 0;
        int len = 0;
        tweet ** temp = tweetList;

        // Determines Lenght of linked list

        while (temp != NULL)    {
                temp = (*temp)->next;
                ++len;
        }

        printf("Cureently there are %d tweets.\n", len);
        printf("Which tweet do you wish to delete – enter a value between 1 and %d:\n", len);

        scanf("%d", &choice);

        // Free the specfic node of list

        while (tweetList != NULL)       {
                tweetList = (*tweetList)->next;
                if (choice == itr)      {
                        free(*tweetList);
                }
                ++itr;
        }
}


