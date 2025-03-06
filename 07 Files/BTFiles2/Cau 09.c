#include <stdio.h>
#include <stdlib.h>

#define INPUT_FILE_NAME "input.txt"
#define MAX_M 100
#define MAX_N 100

typedef struct
{
    int m, n;
    int a[MAX_M][MAX_N];
    int r, c;
} state_t;

void init_state(state_t *state, char *filename);
void print_state(state_t state);
void init_file(char *filename);

int main()
{
    init_file(INPUT_FILE_NAME);

    state_t state;
    init_state(&state, INPUT_FILE_NAME);

    print_state(state);

    return 0;
}

void init_state(state_t *state, char *filename)
{
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        perror("Cannot open file to read!");
        exit(1);
    }

    fscanf(file, "%d %d", &state->m, &state->n);
    for (int i = 0; i < state->m; i++)
    {
        for (int j = 0; j < state->n; j++)
        {
            fscanf(file, "%d", &state->a[i][j]);
        }
    }
    fscanf(file, "%d %d", &state->r, &state->c);
}

void print_state(state_t state)
{
    for (int i = 0; i < state.m; i++)
    {
        for (int j = 0; j < state.n; j++)
        {
            if (i == state.r && j == state.c)
                printf(".. ");
            else
                printf("%2d ", state.a[i][j]);
        }
        printf("\n");
    }
    printf("%d %d\n", state.r, state.c);
}

void init_file(char *filename)
{
    FILE *file = fopen(filename, "w");
    if (file == NULL)
    {
        perror("Cannot open file to write!");
        exit(1);
    }

    fprintf(file, "3 4\n");
    fprintf(file, "1 2 3 4\n");
    fprintf(file, "5 6 7 8\n");
    fprintf(file, "9 10 11 12\n");
    fprintf(file, "1 2\n");

    fclose(file);
}