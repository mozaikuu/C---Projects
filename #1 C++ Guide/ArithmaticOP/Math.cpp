#include <iostream>

int main()
{
    int x = 5; // x is an integer
    x = x + 3; // x = 5 + 3
    x += 3;    // x = x + 3
    x++;       // x = x + 1
    x = x - 2; // x = 8 - 2
    x -= 2;    // x = x - 2
    x--;       // x = x - 1
    x = x * 2; // x = 6 * 2
    x *= 2;    // x = x * 2
    x = x / 2; // x = 12 / 2
    x /= 2;    // x = x / 2
    x = x % 2; // x = 6 % 2
    x %= 2;    // x = x % 2

    int a = 5;
    int b = 2;
    int c = a + b; // c = 5 + 2
    std::cout << std::max(std::max(a, b), c) << std::endl;

    // z = pow(2, 3);  // 2^3 = 8
    // z = sqrt(9);    // 9^0.5 = 3
    // z = abs(-5);    // 5
    // z = ceil(3.2);  // 4
    // z = floor(3.2); // 3
    // z = round(3.2); // 3
    // z = round(3.5); // 4

    return 0;
}