#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

int main (int argc, string argv[]){

    if (argc == 1){
        printf ("You did not entered a command line argument.\n");
        return 1;
    }
    else if (argc > 2){
        printf ("You entered too many command line argument.\n");
        return 1;
    }
    else{
        //turn key into interger
        int key = atoi(argv[1]);
        //prompt for plaintext from a user
        printf ("Enter plaintext:");
        string plaintext = get_string();

    //plaintext is alphabetic

    int asciiupper = 65;
    int asciilower = 97;
    //for each character in string plaintext
    for (int i = 0, numch = strlen(plaintext); i < numch; i++)
    {
        //preservce case, ascii to alphabetic index to ascii index
            //ciphertext = plaintext[i] + key % 26
        if (isupper (plaintext[i]))
            printf ("%c", ((plaintext[i] - asciiupper + key) % 26) + asciiupper);

        else if (islower (plaintext[i]))
            printf ("%c", ((plaintext[i] - asciilower + key) % 26) + asciilower);

        else
            printf ("%c", plaintext[i]);
    }
    return 0;
    }
}