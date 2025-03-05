#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[100];
    double math, physic, chemistry;
} SinhVien;

void initializeFile(char *filename)
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
    char *fileDirname = (char *)malloc(100 * sizeof(char));
    fgets(fileDirname, 100, stdin);
    fileDirname[strlen(fileDirname) - 1] = '\0';

    initializeFile(fileDirname); //! Remove or comment out this line when submitting to ELSE

    FILE *inputFile = fopen(fileDirname, "r");
    if (inputFile == NULL)
    {
        printf("Cannot open file %s\n", fileDirname);
        free(fileDirname);
        return 0;
    }

    int n;
    fscanf(inputFile, "%d\n", &n);

    SinhVien *sv = (SinhVien *)malloc(n * sizeof(SinhVien));
    char buffer[200]; // Buffer to read each line
    for (int i = 0; i < n; i++)
    {
        fgets(buffer, sizeof(buffer), inputFile);
        sscanf(buffer, "%[^\n]", sv[i].name);
        fgets(buffer, sizeof(buffer), inputFile);
        sscanf(buffer, "%lf %lf %lf", &sv[i].math, &sv[i].physic, &sv[i].chemistry);
    }

    printf("Toan |Vat ly |Hoa hoc |Ho va  ten\n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%5.2f|%5.2f  |%5.2f   |%s\n", sv[i].math, sv[i].physic, sv[i].chemistry, sv[i].name);
    }
    printf("Tong so: %d", n);

    free(sv);
    fclose(inputFile);
    free(fileDirname);
    return 0;
}