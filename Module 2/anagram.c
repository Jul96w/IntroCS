#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <cs50.h>
#include <ctype.h>

char* sort (string word);

int main (int argc, char** argv)
{
    if(argc != 3)
    {
        printf("Usage: word1 word2\n");
        return 1;
    }

    string word1 = argv[1];
    string word2 = argv[2];

    sort(word1);
    sort(word2);

    // printf("%s\n", word1);
    // printf("%s\n", word2);

    if(strcmp(word1, word2) == 0)
    {
        printf("ANAGRAMS!!\n");
        return 0;
    }
    else
    {
        printf("Not anagrams :(\n");
        return 1;
    }
}

char* sort(string word)
{
    int size = strlen(word);
    for(int j = 0; j < size; j++)
    {
        word[j] = tolower(word[j]);
    }

    int counter = 1;

    while(counter != 0)
    {
        counter = 0;
        for(int i = 0; i < size; i++)
        {
            if(word[i] < word[i+1])
            {
                int swap = word[i];
                word[i] = word[i+1];
                word[i+1] = swap;
                counter ++;
            }
        }
    }

    return word;
}