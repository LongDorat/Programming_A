#include <stdio.h>

int main()
{
    int BEST, WORST;
    float BEST_TIME, WORST_TIME;
    float time;

    for (int i = 1; i <= 3; i++)
    {
        scanf("%f", &time);
        if (i == 1)
        {
            BEST = i;
            WORST = i;
            BEST_TIME = time;
            WORST_TIME = time;
        }
        else
        {
            if (time < BEST_TIME)
            {
                BEST = i;
                BEST_TIME = time;
            }
            if (time > WORST)
            {
                WORST = i;
                WORST_TIME = time;
            }
        }
    }

    printf("Thanh tich tot nhat: %.1f giay\n", BEST_TIME);
    printf("Thanh tich thap nhat: %.1f giay\n", WORST_TIME);
    printf("VDV thi dau quoc gia: %d\n", BEST);
    printf("VDV xuong voi doi tre: %d", WORST);

    return 0;
}