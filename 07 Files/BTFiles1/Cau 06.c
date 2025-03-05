// Apparently this problem does not interacting with files at all but use traditional terminal interation.
// Therefore, no need to use file I/O functions.

#include <stdio.h>

#define inputFileName "input.txt"
#define outputFileName "output.txt"

void initializeFile() //! Do not add this function when submitting to ELSE, local use only!
{
    FILE *file = fopen(inputFileName, "w");
    if (file == NULL)
    {
        perror("Cannot open file to initialize");
        fclose(file);
        return;
    }
    fprintf(file, "5 7"); // Change this content as needed
    fclose(file);
}

void readResult() //! Do not add this function when submitting to ELSE, local use only!
{
    FILE *file = fopen(outputFileName, "r");
    if (file == NULL)
    {
        perror("Cannot open file to read result");
        fclose(file);
        return;
    }

    char result[100];
    fscanf(file, "%[^\n]", result);
    printf("%s", result);
    fclose(file);
}

int main()
{
    initializeFile(); //! Remove or comment out this line when submiting to ELSE

    FILE *inputFile = fopen(inputFileName, "r");
    if (inputFile == NULL)
    {
        perror("Cannot open file to read");
        fclose(inputFile);
        return 0;
    }

    int a, b;
    fscanf(inputFile, "%d %d", &a, &b);
    fclose(inputFile);

    FILE *outputFile = fopen(outputFileName, "w");
    if (outputFile == NULL)
    {
        perror("Cannot open file write");
        fclose(outputFile);
        return 0;
    }

    fprintf(outputFile, "%d + %d = %d\n", a, b, a + b);
    fclose(outputFile);

    readResult(); //! Remove or comment out this line when submiting to ELSE

    return 0;
}