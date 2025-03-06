#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

void encrypt(char *input, char *output);
void init_file(char *filename);

int main()
{
    init_file(INPUT_FILE_NAME);

    encrypt(INPUT_FILE_NAME, OUTPUT_FILE_NAME);

    FILE *file = fopen(INPUT_FILE_NAME, "r");
    if (file == NULL)
    {
        perror("Cannot open file to read the original!");
        return 1;
    }

    char *line = (char *)malloc(100 * sizeof(char));
    while (fgets(line, 100, file) != NULL)
    {
        printf("%s", line);
    }
    fclose(file);

    file = fopen(OUTPUT_FILE_NAME, "r");
    if (file == NULL)
    {
        perror("Cannot open file to read the encrypted string!");
        return 1;
    }

    printf("\nEncrypted:\n");
    while (fgets(line, 100, file) != NULL)
    {
        printf("%s", line);
    }
    free(line);
    fclose(file);

    return 0;
}

void encrypt(char *input, char *output)
{
    FILE *file = fopen(input, "r");
    if (file == NULL)
    {
        perror("Cannot open file to read!");
        exit(1);
    }

    FILE *output_file = fopen(output, "w");
    if (output_file == NULL)
    {
        perror("Cannot open file to write!");
        exit(1);
    }

    char *line = (char *)malloc(100 * sizeof(char));
    while (fgets(line, 100, file) != NULL)
    {
        for (int i = 0; i < strlen(line); i++)
        {
            if (line[i] != '\n' && line[i] != ' ' && line[i] != '\0')
            {
                if (line[i] >= 'a' && line[i] <= 'z')
                {
                    line[i] -= 32;
                }
                if (line[i] >= 'A' && line[i] <= 'Z')
                {
                    switch (line[i])
                    {
                    case 'X':
                        line[i] = 'A';
                        break;
                    case 'Y':
                        line[i] = 'B';
                        break;
                    case 'Z':
                        line[i] = 'C';
                        break;
                    default:
                        line[i] += 3;
                        break;
                    }
                }
            }
        }
        fprintf(output_file, "%s", line);
    }
    free(line);

    fclose(file);
    fclose(output_file);
}

void init_file(char *filename)
{
    FILE *file = fopen(filename, "w");
    if (file == NULL)
    {
        perror("Cannot open file to write!");
        exit(1);
    }

    fprintf(file, "HELLO WORLD\nMY NAME IS LD");
    fclose(file);
}