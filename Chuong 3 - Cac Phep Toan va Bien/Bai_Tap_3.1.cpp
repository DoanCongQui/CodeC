#include <iostream>
#include <cmath>

int main ()
{
    float x, y;
    std::cout << "x = ";
    std::cin >> x;
    std::cout << "y = ";
    std::cin >> y;

    std::cout << "Ket qua 1: " << (x * y)  + (x / y) << "\n";
    std::cout << "Ket qua 2: " << x + (1 / (x + 1 / (x + 1 / (x + y)))) << "\n";
    std::cout << "Ket qua 3: " << sqrt(pow(3 * x + 2 * y, 2) * pow(5 * x + 1, 3));
}