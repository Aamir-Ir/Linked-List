A3: loadTweetsFromFile.o deleteTweet.o saveTweetsToFile.o countStopWords.o searchTweetsByKeyword.o displayTweets.o addNodeToList.o createTweets.o mainA3.o
	gcc -Wall -std=c99 loadTweetsFromFile.o deleteTweet.o saveTweetsToFile.o countStopWords.o searchTweetsByKeyword.o displayTweets.o addNodeToList.o createTweets.o mainA3.o -o A3

loadTweetsFromFile.o: loadTweetsFromFile.c headerA3.h
	gcc -Wall -std=c99 -c loadTweetsFromFile.c

deleteTweet.o: deleteTweet.c headerA3.h
	gcc -Wall -std=c99 -c deleteTweet.c

saveTweetsToFile.o: saveTweetsToFile.c headerA3.h
	gcc -Wall -std=c99 -c saveTweetsToFile.c

countStopWords.o: countStopWords.c headerA3.h
	gcc -Wall -std=c99 -c countStopWords.c

searchTweetsByKeyword.o: searchTweetsByKeyword.c headerA3.h
	gcc -Wall -std=c99 -c searchTweetsByKeyword.c

displayTweets.o: displayTweets.c headerA3.h
	gcc -Wall -std=c99 -c displayTweets.c

addNodeToList.o: addNodeToList.c headerA3.h
	gcc -Wall -std=c99 -c addNodeToList.c

createTweets.o: createTweets.c headerA3.h
	gcc -Wall -std=c99 -c createTweets.c

mainA3.o: mainA3.c headerA3.h
	gcc -Wall -std=c99 -c mainA3.c

clean:
	rm *.o A3
