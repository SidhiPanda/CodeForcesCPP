#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d", &r);
    scanf("%d", &c);
    int n;
    n = r * c;

    if (n % 2 ==0)
    {
        printf("%d", n / 2);
    }

    else
    {
        printf("%d", (n - 1) / 2);
    }

    return 0;
}