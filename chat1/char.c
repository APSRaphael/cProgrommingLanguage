/*
 * @Author: wb-hk750148@alibaba-inc.com
 * @Date: 2022-05-08 22:08:31
 * @LastEditTime: 2022-05-08 23:23:55
 * @LastEditors: wb-hk750148@alibaba-inc.com
 * @Description:
 */
#include <stdio.h>

// int main()
// {
//     int c;
//     c = getchar();
//     while (c != EOF)
//     {
//         putchar(c);
//         c = getchar();
//     }
// }

// int main()
// {
//     int c;
//
//     while ((c = getchar()) != EOF)
//     {
//         putchar(c);
//     }
// }

// 1-6
int main()
{
    int c;

    while (c = getchar() != EOF)
    {
        printf("%d\n", c);
        printf("%d - at EOF\n", c);
        c = getchar();
    }
}

// 1-7
//  int main()
//  {
//      printf("EOF is %d\n", EOF);
//  }
