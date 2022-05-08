
#include <stdio.h>

// int main()
// {
//     int c, n1;
//     n1 = 0;
//     while ((c = getchar()) != EOF)
//     {
//         if (c == '\n')
//             n1++;
//         printf("%d\n", n1);
//     }
// }

// 1-8
int main()
{
    int c, s1, t1, n1;
    s1 = 0, t1 = 0, n1 = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            s1++;
        else if (c == '\t')
            t1++;
        else if (c == '\n')
            n1++;
            printf("s1 = %d\nt1 = %d\nn1 = %d\n", s1, t1, n1);
    }
}

// 1-9
