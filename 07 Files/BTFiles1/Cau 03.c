#include <stdio.h>
#include <stdlib.h>

// Change the directory as you wish
#define INPUT_FILE "input.txt"
#define OUTPUT_FILE "output.txt"

void is_finished(char *input_file, char *output_file);

int main()
{
    FILE *input_file = fopen(INPUT_FILE, "w");
    fprintf(input_file, "3 3\n1 2 3\n4 5 6\n7 8 0"); // Change this input to the input.txt file
    fclose(input_file);

    is_finished(INPUT_FILE, OUTPUT_FILE);

    FILE *output_file = fopen(OUTPUT_FILE, "r");
    char c;
    while ((c = fgetc(output_file)) != EOF)
    {
        printf("%c", c);
    }
    fclose(output_file);

    return 0;
}

void is_finished(char *input_file, char *output_file)
{
    FILE *input_file_ptr = fopen(input_file, "r");
    if (input_file_ptr == NULL)
    {
        perror("Cannot open file to read!");
        exit(EXIT_FAILURE);
    }

    int m, n;
    fscanf(input_file_ptr, "%d %d\n", &m, &n);

    int *array = (int *)malloc(m * n * sizeof(int));
    for (int i = 0; i < m * n; i++)
    {
        fscanf(input_file_ptr, "%d", &array[i]);
    }

    fclose(input_file_ptr);

    FILE *output_file_ptr = fopen(output_file, "w");
    if (output_file_ptr == NULL)
    {
        perror("Cannot open file to write!");
        exit(EXIT_FAILURE);
    }

    int is_finished = 1;
    for (int i = 0; i < m * n - 1; i++)
    {
        if (array[i] > array[i + 1] || array[m * n - 1] != 0)
        {
            if (i == m * n - 2 && array[m * n - 1] == 0)
                is_finished = 1;
            else
                is_finished = 0;
            break;
        }
        else
        {
            is_finished = 1;
        }
    }

    is_finished == 1 ? fprintf(output_file_ptr, "YES") : fprintf(output_file_ptr, "NO");
    fclose(output_file_ptr);

    free(array);

    return;
}
