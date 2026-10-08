#include <cstdio>
#include "calc.h"

// 临时测试入口：跑几个用例看看算得对不对
int main()
{
    Calc c;

    printf("1 + 2 = %g\n", c.add(1, 2));
    printf("9 - 4 = %g\n", c.sub(9, 4));
    printf("2 - 5 = %g  (负数减法：应输出 -3)\n", c.sub(2, 5));
    printf("3 * 5 = %g\n", c.mul(3, 5));
    printf("8 / 2 = %g\n", c.div(8, 2));
    printf("1 / 0 = %g  (除零保护：应输出 0)\n", c.div(1, 0));

    return 0;
}
