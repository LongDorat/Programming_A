#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void initialize_file(char *filename) //! Do not add this function when submitting to ELSE, local use only!
{
    FILE *file = fopen(filename, "wb");
    if (file == NULL)
    {
        printf("Cannot open file %s\n", filename);
        return;
    }
    fprintf(file, "Truong Dai Hoc Can Tho\rTP. Can Tho"); // Change this content as needed
    fclose(file);
}

int main()
{
    char *filename = (char *)malloc(100 * sizeof(char));
    fgets(filename, 100, stdin);
    filename[strlen(filename) - 1] = '\0';

    initialize_file(filename); //! Remove or comment out this line when submiting to ELSE

    FILE *input_file = fopen(filename, "rb");
    if (input_file == NULL)
    {
        printf("Cannot open file %s\n", filename);
        free(filename);
        return 0;
    }

    // Get file size
    fseek(input_file, 0, SEEK_END);
    long file_size = ftell(input_file);
    fseek(input_file, 0, SEEK_SET);

    char *buffer = (char *)malloc(file_size + 1);
    size_t bytes_read = fread(buffer, sizeof(char), file_size, input_file);
    if (bytes_read != file_size)
    {
        printf("Cannot read file %s\n", filename);
        free(buffer);
        fclose(input_file);
        free(filename);
        return 0;
    }
    buffer[file_size] = '\0'; // Null-terminate the buffer

    // Process the buffer
    int char_count[256] = {0}; // Array to hold the count of each character

    for (long i = 0; i < file_size; i++)
    {
        char_count[(unsigned char)buffer[i]]++;
    }

    // Print the character counts
    for (int i = 0; i < 256; i++)
    {
        if (char_count[i] > 0)
        {
            if (i == '\n')
                printf("\\n: %d \n", char_count[i]); // For this to be correct, replace \\n with \n
            else if (i == '\r')
                printf("\\r: %d \n", char_count[i]);
            else if (i == '\t')
                printf("\\t: %d \n", char_count[i]);
            else if (i == ' ')
                printf(" : %d \n", char_count[i]);
            else
                printf("%c: %d \n", i, char_count[i]);
        }
    }

    free(buffer);
    fclose(input_file);
    free(filename);
    return 0;
}