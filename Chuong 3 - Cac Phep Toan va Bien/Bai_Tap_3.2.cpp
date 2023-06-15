#include <iostream>
//#include <cmath>

int main ()
{
    int r;
    float pi = 3.14;
    std::cout << "Nhap ban kinh hinh tron: ";
    std::cin >> r;

    std::cout << "Chu vi hinh tron: " << 2 * r * pi << "\n";
    std::cout << "Dien tich hinh tron: " << r * r * pi;

}