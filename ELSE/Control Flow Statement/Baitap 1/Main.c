#include "Include.h"

int main()
{
    int index;
    printf("Enter index: ");
    scanf("%d", &index);

    switch (index)
    {
    case 1:
        Solution1();
        break;
    case 2:
        Solution2();
        break;
    case 3:
        Solution3();
        break;
    case 4:
        Solution4();
        break;
    case 5:
        Solution5();
        break;
    case 6:
        Solution6();
        break;
    case 7:
        Solution7();
        break;
    case 8:
        Solution8();
        break;
    case 9:
        Solution9();
        break;
    case 10:
        Solution10();
        break;
    default:
        printf("Error");
        break;
    }

    return 0;
}