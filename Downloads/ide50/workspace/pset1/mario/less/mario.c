#include <cs50.h>
#include <stdio.h>

int main (void)
{
    // Prompt user until a positive number
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (23 < n || n < 0);

    // Print number of rows
    for (int i = 0; i < n; i++)

    {
    // Print number of spaces
    for (int s = 0; s < n-i-1; s++)
    {
        printf(" ");
    }


    // Print out number of columns
    for (int j = 0; j <= i+1; j++)
    {
        printf("#");
    }
        printf("\n");
    }
}


