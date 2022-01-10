#include "headerA3.h"

void addNodeToList(tweet ** tweetList,tweet * node)     {

        (*tweetList) = node;
        node = *tweetList;

}

