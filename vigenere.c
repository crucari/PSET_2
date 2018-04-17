// Implement a program that encrypts messages using Vigenère’s cipher
// Steps:
// 1) Get the key: Second commandline arguement: argv[1] + must be alphabetical (isalpha)
// 2) Get the plain text using get_string
// 3) Encipher--> One character + entire plaintext
// 4) Print ciphertext

#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
int main (int argc, string argv[]){

if (argc!=2){
    printf("invalid");
    return 1;
}
//store argv value
string k = argv[1];
//check for whether all alphabetical keys
for (int i=0 ; i<strlen(k);i++){
    if (!isalpha(k[i])){
        printf("Not all alphabetical");
        return -1;
    }
}

// get plaintext

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
            char cipher = input[i];


            if islower(input[i])
            {
                cipher = (((input[i] + key) - 97) % 26) + 97;
            }

            if isupper(input[i])
            {
                cipher = (((input[i] + key) - 65) % 26) + 65;
            }


            if (isalpha(input[i]))
            {
                input[i] = cipher;
                printf("%c", cipher);
            }

            else
            {
                printf("%c", cipher);
            }

        }

        printf("\n");
        return 0;

    }

}
