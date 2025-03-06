#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x, y;
} point_t;

void init_file(char *filename);

int main()
{
    char filename[] = "points.bin";
    init_file(filename); //! Delete or comment out this line when submitting to ELSE

    FILE *file = fopen(filename, "rb");
    if (file == NULL)
    {
        perror("Cannot open file to read!");
        return 1;
    }

    int i = 0;
    scanf("%d", &i);

    char *line = (char *)malloc(100 * sizeof(char));
    while (fgets(line, 100, file) != NULL)
    {
        point_t point;
        long long index;
        sscanf(line, "%lld %d %d", &index, &point.x, &point.y);
        if (index == i)
        {
            printf("(%d, %d)\n", index, point.x, point.y);
            break;
        }
    }
    free(line);

    fclose(file);
    return 0;
}

void init_file(char *filename) //! Don't copy this function to ELSE, local use only
{
    FILE *file = fopen(filename, "wb");
    if (file == NULL)
    {
        perror("Cannot open file to write!");
        exit(1);
    }

    for (long long i = 0; i < 10000000; i++) // You can change the amount of points here
    {
        point_t point;
        point.x = rand() % (INT_MAX + 1);
        point.y = rand() % (INT_MAX + 1);
        fprintf(file, "%lld %d %d\n", i, point.x, point.y);
    }

    fclose(file);
}