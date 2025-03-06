// Apparently this problem does not interacting with files at all but use traditional terminal interation.
// Therefore, no need to use file I/O functions.

#include <stdio.h>

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

void initialize_file() //! Do not add this function when submitting to ELSE, local use only!
{
    FILE *file = fopen(INPUT_FILE_NAME, "w");
    if (file == NULL)
    {
        perror("Cannot open file to initialize");
        fclose(file);
        return;
    }
    fprintf(file, "5 7"); // Change this content as needed
    fclose(file);
}

void read_result() //! Do not add this function when submitting to ELSE, local use only!
{
    FILE *file = fopen(OUTPUT_FILE_NAME, "r");
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
    initialize_file(); //! Remove or comment out this line when submiting to ELSE

    FILE *input_file = fopen(INPUT_FILE_NAME, "r");
    if (input_file == NULL)
    {
        perror("Cannot open file to read");
        fclose(input_file);
        return 0;
    }

    int a, b;
    fscanf(input_file, "%d %d", &a, &b);
    fclose(input_file);

    FILE *output_file = fopen(OUTPUT_FILE_NAME, "w");
    if (output_file == NULL)
    {
        perror("Cannot open file write");
        fclose(output_file);
        return 0;
    }

    fprintf(output_file, "%d + %d = %d\n", a, b, a + b);
    fclose(output_file);

    read_result(); //! Remove or comment out this line when submiting to ELSE

    return 0;
}