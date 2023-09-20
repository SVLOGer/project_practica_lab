#include <cstdio>
#include <cmath>

int main()
{
    std::puts("please enter a and b for `ax^2+bx+c=0`");
    float a = 0;
    float b = 0;
    float c = 0;
    std::scanf("%f %f %f", &a, &b, &c);
    float dis = (b * b - 4 * a * c);
    float x1 = (-b + std::sqrt(dis)) / (2 * a);
    float x2 = (-b - std::sqrt(dis)) / (2 * a);
    std::printf("x1: %f\nx2: %f\n", x1, x2);
}