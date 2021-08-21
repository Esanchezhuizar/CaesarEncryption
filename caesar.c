#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int make_ciphertext();
int check_key(string key);
int check_int(string num);

int main(int argc, string argv[]) // one line command
{
    if (argc != 2 || check_int(argv[1]))
    {
        printf("Usage: ./caesar key\n");
        return 1;

    }
    else
    {
        check_key(argv[1]);
    }
    
}

int check_int(string num) // checks that there are only int in the key
{
    for (int i = 0; i < strlen(num); i++)
    {
        if (num[i] < 48 || num[i] > 57)
        {
            return 1;
        }
    }
    return 0;
}

int check_key(string key) // checks key - could have gone in main
{
    int k = atoi(key);
    for (int i = 0; i < strlen(key); i++)
    {
        char c = key[i];
        if (isdigit(c))
        {
            string plaintext = get_string("Plaintext:  "); //calls plaintext
            make_ciphertext(k, plaintext); //calls make_ciphertext
            return 0;
        }
    }
    return 0;
}

int make_ciphertext(int key, string plaintext) // encrypts text 
{
    printf("ciphertext: ");
    for (int i = 0; i < strlen(plaintext); i++)
    {
        char n = plaintext[i]; // used islower and is upper instead of isalpha to
        if (islower(n))
        {
            printf("%c", (n - 97 + (char) key) % 26 + 97);
        }
        else if (isupper(n))
        {
            printf("%c", (n - 65 + (char) key) % 26 + 65);
        }
        else
        {
            printf("%c", n); // characters that aren’t alphabetical should remain unchanged.
        }
    }
    printf("\n");
    return 0;
}
