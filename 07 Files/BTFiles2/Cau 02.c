#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_content(char *filename);
void init_file(char *filename);

int main()
{
    char *filename = (char *)malloc(100 * sizeof(char));
    fgets(filename, 100, stdin);
    filename[strlen(filename) - 1] = '\0';

    init_file(filename); //! Delete or comment out this line when submitting to ELSE

    print_content(filename);

    free(filename);
    return 0;
}

void print_content(char *filename)
{
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        perror("Cannot open file to read!");
        exit(1);
    }

    char *line = (char *)malloc(100 * sizeof(char));
    while (fgets(line, 100, file) != NULL)
    {
        printf("%s", line);
    }

    free(line);
    fclose(file);
}

void init_file(char *filename) //! Do not include this function when submitting to ELSE, local use only!
{
    FILE *file = fopen(filename, "w");
    if (file == NULL)
    {
        perror("Cannot open file to write!");
        exit(1);
    }

    char *content = "Hello, world!\nMy name is LD\nGood morning"; // Change this with different test cases
    fprintf(file, "%s", content);

    fclose(file);
}