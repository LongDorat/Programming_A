#include <stdio.h>
#include <stdlib.h>

// Change this directory as you wish
#define inputfile "input.txt"
#define outputfile "output.txt"

void checkPalindrome(char *sInput, char *sOutput);

int main()
{
    checkPalindrome(inputfile, outputfile);

    return 0;
}

void checkPalindrome(char *sInput, char *sOutput)
{
    FILE *inputFile = fopen(sInput, "r");
    if (inputFile == NULL)
    {
        perror("Cannot open file to read!");
        exit(EXIT_FAILURE);
    }
    FILE *outputFile = fopen(sOutput, "w");
    if (outputFile == NULL)
    {
        perror("Cannot open file to write!");
        exit(EXIT_FAILURE);
    }

    int n;
    fscanf(inputFile, "%d", &n);

    double a[100];
    for (int i = 0; i < n; i++)
    {
        fscanf(inputFile, "%lf", &a[i]);
    }

    for (int i = 0; i < n / 2; i++)
    {
        if (a[i] != a[n - i - 1])
        {
            fprintf(outputFile, "NO");
            fclose(outputFile);
            return;
        }
    }

    fprintf(outputFile, "YES");

    fclose(inputFile);
    fclose(outputFile);

    return;
}