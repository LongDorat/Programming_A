#include <stdio.h>
#include <stdlib.h>

// Change the directory as you wish
#define inputfile "input.txt"
#define outputfile "output.txt"

void isFinished(char *sInput, char *sOutput);

int main()
{
    FILE *inputFile = fopen(inputfile, "w");
    fprintf(inputFile, "3 3\n1 2 3\n4 5 6\n7 8 0"); // Change this input to the input.txt file
    fclose(inputFile);

    isFinished(inputfile, outputfile);

    FILE *outputFile = fopen(outputfile, "r");
    char c;
    while ((c = fgetc(outputFile)) != EOF)
    {
        printf("%c", c);
    }
    fclose(outputFile);

    return 0;
}

void isFinished(char *sInput, char *sOutput)
{
    FILE *inputFile = fopen(sInput, "r");
    if (inputFile == NULL)
    {
        perror("Cannot open file to read!");
        exit(EXIT_FAILURE);
    }

    int m, n;
    fscanf(inputFile, "%d %d\n", &m, &n);

    int *array = (int *)malloc(m * n * sizeof(int));
    for (int i = 0; i < m * n; i++)
    {
        fscanf(inputFile, "%d", &array[i]);
    }

    fclose(inputFile);

    FILE *outputFile = fopen(sOutput, "w");
    if (outputFile == NULL)
    {
        perror("Cannot open file to write!");
        exit(EXIT_FAILURE);
    }

    int isFinished = 1;
    for (int i = 0; i < m * n - 1; i++)
    {
        if (array[i] > array[i + 1] || array[m * n - 1] != 0)
        {
            if (i == m * n - 2 && array[m * n - 1] == 0)
                isFinished = 1;
            else
                isFinished = 0;
            break;
        }
        else
        {
            isFinished = 1;
        }
    }

    isFinished == 1 ? fprintf(outputFile, "YES") : fprintf(outputFile, "NO");
    fclose(outputFile);

    free(array);

    return;
}
