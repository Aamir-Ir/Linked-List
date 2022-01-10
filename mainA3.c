# include "headerA3.h"

int main()	{
	int input;
	tweet * tweetList;
	tweet * node = NULL;

	printf("1. Create a new tweet\n");
	printf("2. Display tweets\n");
	printf("3. Search a tweet (by keyword)\n");
	printf("4. Find how many words are “stop words” (stop words are explained in a later section)\n");
	printf("5. Delete the nth tweet\n");
	printf("6. Save tweets to a file\n");
	printf("7. Load tweets from a file\n");
	printf("8. Exit\n");
	printf("Choose a menu option:\n");
	scanf("%d", &input);

	// Error handeling + input choice

	while (input != 8)	{
		if ((input == 1) || (input == 2) || (input == 3) || (input == 4) || (input == 5) || (input == 6) || (input == 7))	{
			if (input == 1)	{
				tweetList = createTweet(tweetList);
				tweetList->next = node;
				node = tweetList;
				addNodeToList(&tweetList, node);
			}
			else if (input == 2) {
				displayTweets(tweetList);
                        }
			else if (input == 3)	{
				searchTweetsByKeyword(tweetList);
			}
			else if (input == 4)	{
				countStopWords(tweetList);
			}
			else if (input == 5)	{
				deleteTweet(&tweetList);
			}
			else if (input == 6)	{
				saveTweetsToFile(tweetList);
			}
			else if (input == 7)	{
				loadTweetsFromFile(&tweetList);
			}
			printf("1. Create a new tweet\n");
			printf("2. Display tweets\n");
			printf("3. Search a tweet (by keyword)\n");
			printf("4. Find how many words are “stop words” (stop words are explained in a later section)\n");
			printf("5. Delete the nth tweet\n");
			printf("6. Save tweets to a file\n");
			printf("7. Load tweets from a file\n");
			printf("8. Exit\n");
			printf("Choose a menu option:\n");
			scanf("%d", &input);
		}
		else	{
			printf("An invalid entry has been entered into the menu please try again\n");
                        printf("1. Create a new tweet\n");
                        printf("2. Display tweets\n");
                        printf("3. Search a tweet (by keyword)\n");
                        printf("4. Find how many words are “stop words” (stop words are explained in a later section)\n");
                        printf("5. Delete the nth tweet\n");
                        printf("6. Save tweets to a file\n");
                        printf("7. Load tweets from a file\n");
                        printf("8. Exit\n");
                        printf("Choose a menu option:\n");
			scanf("%d", &input);
		}
	}
}
