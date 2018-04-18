// Implement a program that encrypts messages using Vigenère’s cipher
// Steps:
// 1) Get the key: Second commandline arguement: argv[1] + must be alphabetical (isalpha)
// 2) Get the plain text using get_string
// 3) Encipher--> One character + entire plaintext
// 4) Print ciphertext

#include <stdio.h>  // pr-jb - vigenere compiles but does not pass check50
#include <stdlib.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
int main (int argc, string argv[]){  // pr-jb - watch out for style with your {}

if (argc!=2){
    printf("invalid");
    return 1;
}
//store argv value
string k = argv[1];
//check for whether all alphabetical keys
for (int i=0 ; i<strlen(k);i++){   // pr-jb - using javascript styling rather then c styling. Remember you have style50 as a tool
    if (!isalpha(k[i])){  //  pr-jb - will need to find a way to index through the key while minding spaces/!isalpha characters in the plaintext.  I recommend checking index of plaintext first, then increment key index
        printf("Not all alphabetical");
        return -1;  // pr-jb - check your exit code for int main function
    }
}

// get plaintext

 string input; // store user input

    if (argc != 2)
    {
        printf("Enter key\n");
        return 1;
    }

    int key = atoi(argv[1]);  // pr-jb - key will be a string and it may be better to convert to ascii # once you have singled out the key indexed char

    if (key < 0)  // pr-jb - key will be entered as a string and should be kept as a string/array rather then a number
    {
        printf("Enter msg:\n");
        return 1;
    }

    else
    {

        input = get_string("Enter a message: ");  // pr-jb - this code will cipher caesars but won't cipher for vigenere
        printf("ciphertext: ");

        for (int i = 0, n = strlen(input); i < n; i++)
        {
            char cipher = input[i];


            if islower(input[i])  // pr-jb- will need to find a way to cycle through the key by index and insert it into the below algorithm
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
