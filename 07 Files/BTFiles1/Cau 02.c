#include <stdio.h>
#include <stdlib.h>

#define inputfile "input.txt"
#define outputfile "output.txt"

void isSort(char *sInput, char *sOutput);

int main()
{
    FILE *inputFile = fopen(inputfile, "w");
    fprintf(inputFile, "5\n1 2 3 4 5"); // Change this input to the input.txt file
    fclose(inputFile);

    isSort(inputfile, outputfile);

    FILE *outputFile = fopen(outputfile, "r");
    char c;
    while ((c = fgetc(outputFile)) != EOF)
    {
        printf("%c", c);
    }
    fclose(outputFile);

    return 0;
}

void isSort(char *sInput, char *sOutput)
{
    FILE *inputFile = fopen(sInput, "r");
    if (inputFile == NULL)
    {
        perror("Cannot open file to read!");
        exit(EXIT_FAILURE);
    }

    int n;
    fscanf(inputFile, "%d", &n);

    double a[100];
    for (int i = 0; i < n; i++)
    {
        fscanf(inputFile, "%lf", &a[i]);
    }

    fclose(inputFile);

    FILE *outputFile = fopen(sOutput, "w");
    if (outputFile == NULL)
    {
        perror("Cannot open file to write!");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            fprintf(outputFile, "NO");
            fclose(outputFile);
            return;
        }
    }

    fprintf(outputFile, "YES");
    fclose(outputFile);

    return;
}