#include <stdio.h>

char sequential(int, int, int, int);

int main()
{
    int a, b, c, d;

    printf("Please enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    char result = sequential(a, b, c, d);

    if (result == 'Y')
    {
        printf("\nYes\n");
    }
    else
    {
        printf("\nNo\n");
    }

    return 0;
}

char sequential(int a, int b, int c, int d)
{
    if ((b == a + 1 && c == b + 1 && d == c + 1) ||
        (b == a - 1 && c == b - 1 && d == c - 1))
    {
        return 'Y'; // 'Y' for Yes
    }
    else
    {
        return 'N'; // 'N' for No
    }
}
