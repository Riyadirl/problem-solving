#include <stdio.h>

void age_in_years_months_days(int N)
{
    int years = N / 365;
    N %= 365;
    int months = N / 30;
    int days = N % 30;

    if (years > 0)
        printf("%d years\n", years);
    if (months > 0)
        printf("%d months\n", months);
    if (days > 0)
        printf("%d days\n", days);
}

int main()
{
    int N;
    scanf("%d", &N);
    age_in_years_months_days(N);
    return 0;
}
