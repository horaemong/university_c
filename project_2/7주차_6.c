#include <stdio.h>

void main()
{
    int i, j;

    while (1)
    {
        printf("숫자를 입력하세요 : ");
        scanf_s("%d", &i);

        if (i < 1)
            break;

        for (j = 2; j <= i; j++)
        {
            if (i % j == 0)
                break;
        }
        if (i == j)
            printf("%d는 소수입니다.\n", i);
        else
            printf("%d는 소수가 아닙니다.\n", i);
    }

    int i, j, n, sum = 0;
    while (1)
    {
        printf("숫자를 입력하세요(1이하면 end) : ");
        scanf_s("%d", &n);

        if (n <= 1)
            break;

        printf("1부터 %d까지의 소수는 : ", n);
        for (i = 2; i <= n; i++)
        {
            for (j = 2; j <= i; j++)
            {
                if (i % j == 0)
                    break;
            }
            if (i == j)
            {
                printf("%4d", i);
                sum += i;
            }
        }
        printf("\n");
        printf("소수의 합은 %d입니다.\n", sum);
        sum = 0;
    }
}