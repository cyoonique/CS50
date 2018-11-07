#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int pheight;

    do
    {
        printf ("Height:");
        pheight = get_int();
    }
    while (pheight <= 0 || pheight >= 23);

    //loop for the rows
    for (int i = 1; i < pheight; i++)
    {
        for (int emptyspace = (pheight-i); emptyspace >=0 ; emptyspace--)
        {
            printf(" ");
        }
        for (int hesh = 1; hesh < i+2 ; hesh++)
        {
            printf("#");
        }
        printf ("\n");
    }
    return 0;
}
