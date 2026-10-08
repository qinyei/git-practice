#include "calc.h"

double Calc::add(double a, double b)
{
    return a + b;
}

double Calc::sub(double a, double b)
{
    return a - b;
}

double Calc::mul(double a, double b)
{
    return a * b;
}

// 计算器核心：除法
// 除数为 0 时返回 0，界面层再另行提示"除数不能为 0"
double Calc::div(double a, double b)
{
    if (b == 0.0) {     // 除零保护：避免算出 inf / nan
        return 0.0;
    }
    return a / b;
}
