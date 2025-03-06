#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_line(char *filename);
void init_file(char *filename);

int main()
{
    char *filename = (char *)malloc(100 * sizeof(char));
    fgets(filename, 100, stdin);
    filename[strlen(filename) - 1] = '\0';

    init_file(filename); //! Delete or comment out this file when submitting to ELSE

    int result = count_line(filename);

    printf("Number of lines: %d\n", result);

    free(filename);
    return 0;
}

int count_line(char *filename)
{
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        perror("Cannot open file to read!");
        return 1;
    }

    int count = 0;
    char c;
    char before;
    while ((c = fgetc(file)) != EOF)
    {
        if (c == '\n')
        {
            count++;
        }
        before = c;
    }

    if (before != '\n')
    {
        count++;
    }

    return count;
}

void init_file(char *filename) //! Do not include this function when submitting to ELSE, local use only!
{
    FILE *file = fopen(filename, "w");
    if (file == NULL)
    {
        perror("Cannot open file to initialize!");
        exit(1);
    }

    fprintf(file, "Hello\nWorld"); // Change this with different test cases

    fclose(file);
}