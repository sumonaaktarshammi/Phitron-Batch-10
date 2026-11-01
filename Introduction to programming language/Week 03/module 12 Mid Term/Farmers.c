#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        int m_1, m_2, d;
        scanf("%d %d %d", &m_1, &m_2, &d);

        int total_f = m_1 + m_2;
        int n_days = (m_1 * d) / total_f;
        int day = d - n_days;

        printf("%d\n", day);
    }
    return 0;
}