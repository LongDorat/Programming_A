#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    if (num < 0)
    {
        printf("You entered a negative number.");
    }
    else if (num == 0)
    {
        printf("You entered 0.");
    }
    else
    {
        printf("You entered a positive number.");
    }

    return 0;
}