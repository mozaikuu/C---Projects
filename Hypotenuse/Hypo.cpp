#include <iostream>
#include <cmath>

int main();

void math()
{
    std::string a1, b1, c1;

    std::cout << "Enter the length of the first side: (Q to skip)";
    std::cin >> a1;
    std::cout << "Enter the length of the second side: (Q to skip)";
    std::cin >> b1;
    std::cout << "Enter the length of the hypotenuse side: (Q to skip)";
    std::cin >> c1;
    std::cout << std::endl;

    if (a1 == "q" && b1 == "q" && c1 == "q")
    {
        std::cout << "You have not entered any values. Please try again." << std::endl;
        main();
    }
    else if (a1 == "q" && b1 == "q")
    {
        std::cout << "atleast 2 sides must be entered. Please try again." << std::endl;
        main();
    }
    else if (a1 == "q" && c1 == "q")
    {
        std::cout << "atleast 2 sides must be entered. Please try again." << std::endl;
        main();
    }
    else if (b1 == "q" && c1 == "q")
    {
        std::cout << "atleast 2 sides must be entered. Please try again." << std::endl;
        main();
    }
    else
    {
        std::cout << "The length of the first side is: " << a1 << std::endl;
        std::cout << "The length of the second side is: " << b1 << std::endl;
        std::cout << "The length of the third side is: " << c1 << std::endl
                  << std::endl;

        double a, b, c;

        if (a1 != "q")
        {
            a = std::stod(a1);
        }
        if (b1 != "q")
        {
            b = std::stod(b1);
        }
        if (c1 != "q")
        {
            c = std::stod(c1);
        }

        if (a1 == "q" && b1 != "q" && c1 != "q")
        {
            std::cout << "The length of the first side is: " << sqrt(pow(c, 2) - pow(b, 2)) << std::endl;
        }
        else if (a1 != "q" && b1 == "q" && c1 != "q")
        {
            std::cout << "The length of the second side is: " << sqrt(pow(c, 2) - pow(a, 2)) << std::endl;
        }
        else if (a1 != "q" && b1 != "q" && c1 == "q")
        {
            std::cout << "The length of the third side is: " << sqrt(pow(a, 2) + pow(b, 2)) << std::endl;
        }
    }
}

int main()
{
    math();
}