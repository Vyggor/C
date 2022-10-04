#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    char c = '#';

    do
    {
        n = get_int("what's the height of the pyramid?");
    }
    while (n < 1 || n > 8);

    for (int i = 0; i < n; i++)
    {
        for (int d = n - i - 1; d > 0; d--)
        {
            printf(" ");
        }
        for (int j = 0; j < i + 1; j++){
            printf("%c" , c);
        }

        printf("\n");
    }
}
