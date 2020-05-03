#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    
    //take in two arguments
    if (argc != 2)
    {
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }

    
    // save input with loop in array
    for(int i = 0, leng = strlen(argv[1]); i < leng; i++) {
        argv[1][i] = tolower(argv[1][i]);
        
        if(!isalpha(argv[1][i])) {
            printf("Usage: ./vigenere key");
            return 1;
        }
    }
    
    string keyword = argv[1];
    printf("Your input is: %s\n", keyword);
    
   
    //ask user for plaintext
    string plain = get_string("plaintext: ");
    printf("ciphertext: ");
    int kl = strlen(keyword);

    
    for (int i = 0, j = 0, n = strlen(plain); i < n; i++)
    {
        if (!isalpha(plain[i]))
        {
            printf("%c", plain[i]);
        }
        
        int minus = isupper(plain[i]) ? 65 : 97;
        
        int pl = plain[i] - minus;
        int kj = toupper(keyword[j % kl]) - 65;
        int ci = (pl + kj) % 26;
        j++;
        
        printf("%c", ci + minus);
    }
    printf("\n");
}