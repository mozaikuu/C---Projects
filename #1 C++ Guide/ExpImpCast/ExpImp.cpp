#include <iostream>

int main()
{
    // ascii table
    // https://www.asciitable.com/

    int x = 5.32; // .32 is removed
    std::cout << x << std::endl;

    char c = 65; // 65 is the ascii code for A
    std::cout << c << std::endl;

    int y = 'A'; // 65 is the ascii code for A
    std::cout << y << std::endl;

    int correct = 8;
    int Questions = 10;
    double percent = (double)correct / Questions * 100; // 80.0
    std::cout << percent << "%" << std::endl;

    return 0;
}