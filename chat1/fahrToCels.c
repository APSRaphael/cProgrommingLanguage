/*
 * @Author: wb-hk750148@alibaba-inc.com
 * @Date: 2022-05-06 00:45:14
 * @LastEditTime: 2022-05-06 00:50:29
 * @LastEditors: wb-hk750148@alibaba-inc.com
 * @Description:
 */
#include <stdio.h>

int main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\t%d\n", fahr, celsius, fahr);
        fahr += step;
    }
}
