#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

int main (int argc, string argv[]){

    if (argc != 2){
        printf ("You entered a wrong command line argument.\n");
        return 1;
    }
    else{
        for (int i = 0, numch = strlen(argv[1]); i < numch; i++){
            if (!isalpha (argv[1][i])){
            printf ("You entered non alphabetical command line argument.\n");
            return 1;
            }
        }
    }

        string key = argv[1];
        int lenkey = strlen(key);

        //prompt for plaintext from a user
        printf ("Enter plaintext:");
        string plaintext = get_string();

    int asciiupper = 65;
    int asciilower = 97;
    // Loop through text
    for (int i = 0, j = 0, numch = strlen(plaintext); i < numch; i++){

        // Get key for this letter
        int wrapkey = tolower(key[j % lenkey]) - asciilower;
        //preservce case, ascii to alphabetic index to ascii index
            //ciphertext = plaintext[i] + key % 26
        if (isupper (plaintext[i])){
            printf("%c", asciiupper + (plaintext[i] - asciiupper + wrapkey) % 26);
            j++;
        }
        else if (islower (plaintext[i])){
            printf ("%c", ((plaintext[i] - 'a' + wrapkey) % 26) + 'a');
            j++;
        }
        else {
            printf ("%c", plaintext[i]);
        }
    }
    printf("\n");
    return 0;
}