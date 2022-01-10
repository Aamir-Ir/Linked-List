#include "headerA3.h"

tweet * createTweet(tweet * tweetList)  {
        int userId, i;
        int sum = 0;
        tweetList = malloc(sizeof(tweet));

        // Option 1 creation of user

        printf("Enter a username:\n");
        getc(stdin);
        fgets(tweetList->user, sizeof(tweetList->user), stdin);
        printf("Enter the user's tweet:\n");
        fgets(tweetList->text, sizeof(tweetList->text), stdin);

        for (i = 0; i <= strlen(tweetList->user); ++i)       {
                if (tweetList->user[i] == '\n') {
                        tweetList->user[i] = '\0';
                }
        }

        // Determining user ID

        for (i = 0; i < strlen(tweetList->user) - 1; ++i)       {
                sum += tweetList->user[i];
        }

        userId = sum + strlen(tweetList->text) - 1;
        tweetList->id = userId;

        printf("Your computer-generated useid is %d\n", userId);

        return tweetList;
}


