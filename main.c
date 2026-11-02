#include <stdio.h>

int main(void)
{
    int input;
    scanf("%d", &input);

    if (input > 100 || input < 0)
    {
        printf("NG");
    }
    else if (input >= 90)
    {
        printf("AA");
    }
    else if (input >= 80)
    {
        printf("A");
    }
    else if (input >= 70)
    {
        printf("B");
    }
    else if (input >= 60)
    {
        printf("C");
    }
    else if (input >= 1)
    {
        printf("D");
    }
    else
    {
        printf("/");
    }

    return 0;
}
