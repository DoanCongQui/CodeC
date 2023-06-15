#include <iostream>
#include <cmath>

int main ()
{
    float a, b, c, p;
    std::cout << "Nhap canh a: ";
    std::cin >> a;
    std::cout << "Nhap canh b: ";
    std::cin >> b;
    std::cout << "Nhap canh c: ";
    std::cin >> c;

    p = (a + b + c) / 2;

    std::cout << "Dien tich tam giac: " << sqrt(p * (p - a) * (p - b) * (p -c)) << "\n";


}