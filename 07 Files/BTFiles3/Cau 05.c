#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_HEIGHT 100
#define MAX_WIDTH 100

typedef struct
{
    int m, n;
    int table[MAX_HEIGHT][MAX_WIDTH];
    int row, column;
} state_t;

void init_state(state_t *state, char *filename);
void print_state(state_t state);
int move_up(state_t state, state_t *new_state);
int move_down(state_t state, state_t *new_state);
int move_left(state_t state, state_t *new_state);
int move_right(state_t state, state_t *new_state);
int is_finished(state_t state);
int is_sorted(int *arr, int n);
void init_file(char *filename);

int main()
{
    char *file_name = (char *)malloc(100 * sizeof(char));
    printf("Enter the file name: ");
    fgets(file_name, 100, stdin);
    file_name[strlen(file_name) - 1] = '\0';

    init_file(file_name); //! Delete or comment this line when submitting to ELSE

    state_t state;
    init_state(&state, file_name);

    char *direction = (char *)malloc(100 * sizeof(char));
    while (true)
    {
        if (is_finished(state) == 1)
        {
            printf("You win!\n");
            break;
        }
        print_state(state);

        printf("Enter the direction: ");
        fgets(direction, 100, stdin);
        direction[strlen(direction) - 1] = '\0';

        if (strcmp(direction, "UP") == 0)
        {
            state_t new_state;
            if (move_up(state, &new_state) == 1)
            {
                state = new_state;
            }
            else
            {
                printf("Illegal move.\n");
            }
        }
        else if (strcmp(direction, "DOWN") == 0)
        {
            state_t new_state;
            if (move_down(state, &new_state) == 1)
            {
                state = new_state;
            }
            else
            {
                printf("Illegal move.\n");
            }
        }
        else if (strcmp(direction, "LEFT") == 0)
        {
            state_t new_state;
            if (move_left(state, &new_state) == 1)
            {
                state = new_state;
            }
            else
            {
                printf("Illegal move.\n");
            }
        }
        else if (strcmp(direction, "RIGHT") == 0)
        {
            state_t new_state;
            if (move_right(state, &new_state) == 1)
            {
                state = new_state;
            }
            else
            {
                printf("Illegal move.\n");
            }
        }
        else if (strcmp(direction, "EXIT") == 0)
        {
            printf("You lose!\n");
            break;
        }
        else
        {
            printf("Unknown command, please enter: UP, DOWN, LEFT, RIGHT or EXIT\n");
        }
    }

    free(file_name);
    free(direction);
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
            fscanf(file, "%d", &state->table[i][j]);
        }
    }
    fscanf(file, "%d %d", &state->row, &state->column);

    fclose(file);
}

void print_state(state_t state)
{
    for (int i = 0; i < state.m; i++)
    {
        for (int j = 0; j < state.n; j++)
        {
            if (i == state.row && j == state.column)
            {
                printf(".. ");
            }
            else
            {
                printf("%2d ", state.table[i][j]);
            }
        }
        printf("\n");
    }
    printf("%d %d\n", state.row, state.column);
}

int move_up(state_t state, state_t *new_state)
{
    if (state.row == 0)
    {
        return 0;
    }

    new_state->m = state.m;
    new_state->n = state.n;
    new_state->row = state.row - 1;
    new_state->column = state.column;
    for (int i = 0; i < state.m; i++)
    {
        for (int j = 0; j < state.n; j++)
        {
            new_state->table[i][j] = state.table[i][j];
        }
    }
    new_state->table[state.row][state.column] = state.table[state.row - 1][state.column];
    new_state->table[state.row - 1][state.column] = 0;
    return 1;
}

int move_down(state_t state, state_t *new_state)
{
    if (state.row == state.m - 1)
    {
        return 0;
    }

    new_state->m = state.m;
    new_state->n = state.n;
    new_state->row = state.row + 1;
    new_state->column = state.column;
    for (int i = 0; i < state.m; i++)
    {
        for (int j = 0; j < state.n; j++)
        {
            new_state->table[i][j] = state.table[i][j];
        }
    }
    new_state->table[state.row][state.column] = state.table[state.row + 1][state.column];
    new_state->table[state.row + 1][state.column] = 0;
    return 1;
}

int move_left(state_t state, state_t *new_state)
{
    if (state.column == 0)
    {
        return 0;
    }

    new_state->m = state.m;
    new_state->n = state.n;
    new_state->row = state.row;
    new_state->column = state.column - 1;
    for (int i = 0; i < state.m; i++)
    {
        for (int j = 0; j < state.n; j++)
        {
            new_state->table[i][j] = state.table[i][j];
        }
    }
    new_state->table[state.row][state.column] = state.table[state.row][state.column - 1];
    new_state->table[state.row][state.column - 1] = 0;
    return 1;
}

int move_right(state_t state, state_t *new_state)
{
    if (state.column == state.n - 1)
    {
        return 0;
    }

    new_state->m = state.m;
    new_state->n = state.n;
    new_state->row = state.row;
    new_state->column = state.column + 1;
    for (int i = 0; i < state.m; i++)
    {
        for (int j = 0; j < state.n; j++)
        {
            new_state->table[i][j] = state.table[i][j];
        }
    }
    new_state->table[state.row][state.column] = state.table[state.row][state.column + 1];
    new_state->table[state.row][state.column + 1] = 0;
    return 1;
}

int is_finished(state_t state)
{
    if (state.table[state.m - 1][state.n - 1] != 0)
    {
        return 0;
    }

    int linear_table[MAX_HEIGHT * MAX_WIDTH];
    int k = 0;
    for (int i = 0; i < state.m; i++)
    {
        for (int j = 0; j < state.n; j++)
        {
            linear_table[k++] = state.table[i][j];
        }
    }

    if (is_sorted(linear_table, state.m * state.n) == 1)
    {
        return 1;
    }

    return 0;
}

int is_sorted(int *arr, int n)
{
    for (int i = 0; i < n - 2; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return 0;
        }
    }
    return 1;
}

void init_file(char *filename) //! Remove this function when submitting to ELSE, local use only!
{
    FILE *file = fopen(filename, "w");
    if (file == NULL)
    {
        perror("Cannot open file to write!");
        exit(1);
    }

    fprintf(file, "3 3\n");
    fprintf(file, "1 0 3\n");
    fprintf(file, "4 2 5\n");
    fprintf(file, "7 8 6\n");
    fprintf(file, "0 1\n");

    fclose(file);
}