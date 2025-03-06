#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[100];
    double math, physics, chemistry;
} student;

void initialize_file(char *filename)
{
    FILE *file = fopen(filename, "w");
    if (file == NULL)
    {
        perror("Cannot open file to initialize");
        return;
    }
    fprintf(file, "5\nNguyen Van A\n5 6 7\nNguyen Van B\n6 7 8\nNguyen Van C\n7 8 9\nNguyen Van D\n8 9 10\nNguyen Van E\n9 10 11"); // Change this content as needed
    fclose(file);
}

int main()
{
    char *file_dirname = (char *)malloc(100 * sizeof(char));
    fgets(file_dirname, 100, stdin);
    file_dirname[strlen(file_dirname) - 1] = '\0';

    initialize_file(file_dirname); //! Remove or comment out this line when submitting to ELSE

    FILE *input_file = fopen(file_dirname, "r");
    if (input_file == NULL)
    {
        printf("Cannot open file %s\n", file_dirname);
        free(file_dirname);
        return 0;
    }

    int n;
    fscanf(input_file, "%d\n", &n);

    student *sv = (student *)malloc(n * sizeof(student));
    char buffer[200]; // Buffer to read each line
    for (int i = 0; i < n; i++)
    {
        fgets(buffer, sizeof(buffer), input_file);
        sscanf(buffer, "%[^\n]", sv[i].name);
        fgets(buffer, sizeof(buffer), input_file);
        sscanf(buffer, "%lf %lf %lf", &sv[i].math, &sv[i].physics, &sv[i].chemistry);
    }

    printf("Toan |Vat ly |Hoa hoc |Ho va  ten\n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%5.2f|%5.2f  |%5.2f   |%s\n", sv[i].math, sv[i].physics, sv[i].chemistry, sv[i].name);
    }
    printf("Tong so: %d", n);

    free(sv);
    fclose(input_file);
    free(file_dirname);
    return 0;
}