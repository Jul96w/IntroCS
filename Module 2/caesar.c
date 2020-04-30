#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    
    // printf("0: %s\n", argv[0]);
    // printf("1: %s\n", argv[1]);
    // printf("2: %s\n", argv[2]);
    //take in two arguments
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    
    //second argument is key 
    int key = atoi(argv[1]);
    
    //check if key is positive int, otherwise ask again
    if (key <= 0)
    {
        printf("Key should be a number greater than 0.\n");
        return 2;
    }
    // else
    // {
    //     printf("Success\n");
    // }
    
    //ask user for plaintext
    string plain = get_string("Plaintext: ");
    printf("Your message was: %s\n", plain);
    
    //main part of the function
    // char c = 'c';
    // printf("%c", c + 1);
    
    // char test = plain[0];
    int sizeTest =  sizeof(plain)/sizeof(plain[0]);
    // for (int i = 0, i < )
    
    printf("Now your message is: %c\n", test + 1);
    
    
    //output ciphertext
    
    //c = (p + k) % 26
    
}