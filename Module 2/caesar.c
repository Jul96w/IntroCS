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
        printf("Usage: ./caesar key\n");
        return 1;
    }
    
    //second argument is key 
    int key = atoi(argv[1]) % 26;
    
    //check if key is positive int, otherwise ask again
    if (key < 0)
    {
        printf("Key should be a number greater than 0.\n");
        return 2;
    }
    
    //ask user for plaintext
    string plain = get_string("plaintext: ");
    printf("ciphertext: ");

    
    for (int i = 0; i < strlen(plain); i++)
    {
        if (isalpha(plain[i]))
        {
            int ascii = isupper(plain[i]) ? 65 : 97;
            int cipher = (plain[i] - ascii + key) % 26 + ascii;
            printf("%c", cipher);
        }
        else
        {
            printf("%c", plain[i]);
        }
    }
    printf("\n");
}