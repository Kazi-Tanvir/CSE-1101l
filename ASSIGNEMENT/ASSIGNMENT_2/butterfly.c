#include <stdio.h>

void print(int n, char c)
{
    for (int i = 0; i <= 2 * (n - 2) + 2; i++)
    {
        if (i == n - 2)
            printf("\\");
        else if (i == n - 1)
            printf(" ");
        else if (i == n)
            printf("/");
        else
            printf("%c", c);
    }
}

int main()  
{
    int n;
    printf("Enter Your number and char : ");
    scanf("%d", &n);
    int length = 2 * (n - 2) + 1;
    for (int i = 0; i < length; i++)
    {
        if (i == (length - 1) / 2)
        {
            for (int j = 0; j < n - 1; j++)
            {
                printf(" ");
            }
            printf("@");
        }
        else
        {
            print(n, (i % 2 == 0) ? '*' : '=');
        }
        printf("\n");
    }

    return 0;
}