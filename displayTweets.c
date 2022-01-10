#include "headerA3.h"

void displayTweets(tweet * tweetList)   {

        //Traversing list and printing all values.

        while (tweetList != NULL)       {
                printf("%d: Created by %s: %s", tweetList->id, tweetList->user, tweetList->text);
                tweetList = tweetList->next;
        }
}

