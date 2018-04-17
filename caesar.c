// Unencrypted text is generally called plaintext. Encrypted text is generally called ciphertext. And the secret used is called a key.

// More generally, Caesar’s algorithm (i.e., cipher) encrypts messages by "rotating" each letter by k positions.
// More formally, if p is some plaintext (i.e., an unencrypted message), pi is the ith character in p, and k is a secret key (i.e., a non-negative integer),
// then each letter, ci, in the ciphertext, c, is computed as

// ci=(pi+k)mod26

// Steps:
// 1) Get the key
// -get it using the commandline arguement
// -atoi

//argc and argv
// 2) Get the plain text
// 3) Encipher
// 4) Print cipher text

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{

    string input; // store user input

    if (argc != 2)
    {
        printf("Enter key\n");
        return 1;
    }

    int key = atoi(argv[1]);

    if (key < 0)
    {
        printf("Enter msg:\n");
        return 1;
    }

    else
    {

        input = get_string("Enter a message: ");
        printf("ciphertext: ");

        for (int i = 0, n = strlen(input); i < n; i++)
        {
            char ciph = input[i];


            if islower(input[i])
            {
                ciph = (((input[i] + key) - 97) % 26) + 97;
            }

            if isupper(input[i])
            {
                ciph = (((input[i] + key) - 65) % 26) + 65;
            }


            if (isalpha(input[i]))
            {
                input[i] = ciph;
                printf("%c", ciph);
            }

            else
            {
                printf("%c", ciph);
            }

        }

        printf("\n");
        return 0;

    }

}