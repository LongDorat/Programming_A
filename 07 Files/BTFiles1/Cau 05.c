#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void initializeFile(char *filename) //! Do not add this function when submitting to ELSE, local use only!
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

    initializeFile(filename); //! Remove or comment out this line when submiting to ELSE

    FILE *inputFile = fopen(filename, "rb");
    if (inputFile == NULL)
    {
        printf("Cannot open file %s\n", filename);
        free(filename);
        return 0;
    }

    // Get file size
    fseek(inputFile, 0, SEEK_END);
    long fileSize = ftell(inputFile);
    fseek(inputFile, 0, SEEK_SET);

    char *buffer = (char *)malloc(fileSize + 1);
    size_t bytesRead = fread(buffer, sizeof(char), fileSize, inputFile);
    if (bytesRead != fileSize)
    {
        printf("Cannot read file %s\n", filename);
        free(buffer);
        fclose(inputFile);
        free(filename);
        return 0;
    }
    buffer[fileSize] = '\0'; // Null-terminate the buffer

    // Process the buffer
    int charCount[256] = {0}; // Array to hold the count of each character

    for (long i = 0; i < fileSize; i++)
    {
        charCount[(unsigned char)buffer[i]]++;
    }

    // Print the character counts
    for (int i = 0; i < 256; i++)
    {
        if (charCount[i] > 0)
        {
            if (i == '\n')
                printf("\\n: %d \n", charCount[i]); // For this to be correct, replace \\n with \n
            else if (i == '\r')
                printf("\\r: %d \n", charCount[i]);
            else if (i == '\t')
                printf("\\t: %d \n", charCount[i]);
            else if (i == ' ')
                printf(" : %d \n", charCount[i]);
            else
                printf("%c: %d \n", i, charCount[i]);
        }
    }

    free(buffer);
    fclose(inputFile);
    free(filename);
    return 0;
}