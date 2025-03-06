#include <stdio.h>
#include <stdlib.h>

// Change this directory as you wish
#define INPUT_FILE "input.txt"
#define OUTPUT_FILE "output.txt"

void check_palindrome(char *input_file, char *output_file);

int main()
{
    check_palindrome(INPUT_FILE, OUTPUT_FILE);

    return 0;
}

void check_palindrome(char *input_file, char *output_file)
{
    FILE *input = fopen(input_file, "r");
    if (input == NULL)
    {
        perror("Cannot open file to read!");
        exit(EXIT_FAILURE);
    }
    FILE *output = fopen(output_file, "w");
    if (output == NULL)
    {
        perror("Cannot open file to write!");
        exit(EXIT_FAILURE);
    }

    int n;
    fscanf(input, "%d", &n);

    double a[100];
    for (int i = 0; i < n; i++)
    {
        fscanf(input, "%lf", &a[i]);
    }

    for (int i = 0; i < n / 2; i++)
    {
        if (a[i] != a[n - i - 1])
        {
            fprintf(output, "NO");
            fclose(output);
            return;
        }
    }

    fprintf(output, "YES");

    fclose(input);
    fclose(output);

    return;
}