/*
 * @Author: wb-hk750148@alibaba-inc.com
 * @Date: 2022-05-06 00:45:14
 * @LastEditTime: 2022-05-08 21:38:09
 * @LastEditors: wb-hk750148@alibaba-inc.com
 * @Description:
 */
#include <stdio.h>
// 华氏温度转换成摄氏温度
// int main()
// {
//     int fahr, celsius;
//     int lower, upper, step;

//     lower = 0;
//     upper = 300;
//     step = 20;

//     fahr = lower;
//     while (fahr <= upper)
//     {
//         celsius = 5 * (fahr - 32) / 9;
//         printf("%d\t%d\t%d\n", fahr, celsius, fahr);
//         fahr += step;
//     }
// }

// int main()
// {
//     float celsius;
//     int fahr, lower, upper, step;

//     lower = 0;
//     upper = 300;
//     step = 20;

//     fahr = lower;
//     while (fahr <= upper)
//     {
//         celsius = (fahr - 32) * 5.0 / 9.0;
//         printf("%3d\t%.1f\n", fahr, celsius);
//         fahr += step;
//     }
// }

// int main()
// {
//     float fahr, celsius;
//     int lower, upper, step;

//     lower = 0;
//     upper = 300;
//     step = 20;

//     fahr = lower;
//     while (fahr <= upper)
//     {
//         celsius = (fahr - 32) * 5.0 / 9.0;
//         printf("%3.0f %6.1f\n", fahr, celsius);
//         fahr += step;
//     }
// }

// int main()
// {
//     int fahr;
//     for (fahr = 0; fahr <= 300; fahr += 20)
//     {
//         printf("%3d\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
//     }
// }

// 1-3

// int main()
// {
//     float fahr, celsius;
//     int lower, upper, step;

//     lower = 0;
//     upper = 300;
//     step = 20;

//     printf("Fahr to Celsius\n");
//     fahr = lower;
//     while (fahr <= upper)
//     {
//         celsius = (5.0 / 9.0) * (fahr - 32); // 这里 32 会做一个隐式转换成浮点数
//         printf("%3.0f\t%6.1f\n", fahr, celsius);
//         fahr = fahr + step;
//     }
// }

// 1-4
// 摄氏温度转换成华氏温度
// int main()
// {
//     float fahr, celsius;
//     int lower, upper, step;

//     lower = 0;
//     upper = 300;
//     step = 20;

//     printf("Celsius to Fahr\n");
//     celsius = lower;
//     while (celsius <= upper)
//     {
//         fahr = 9.0 * celsius / 5.0 + 32;
//         printf("%3.0f\t%3.0f\n", celsius, fahr);
//         celsius += step;
//     }
// }

// 1-5
// int main()
// {
//     float fahr, celsius;
//     int lower, upper, step;

//     lower = 0;
//     upper = 300;
//     step = 20;

//     fahr = upper;
//     while (fahr >= lower)
//     {
//         celsius = (5.0 / 9.0) * (fahr - 32);
//         printf("%3.0f\t%6.1f\n", fahr, celsius);
//         fahr -= step;
//     }
// }

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
    int fahr;
    for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
    {
        /* code */
        printf("%3d\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}
