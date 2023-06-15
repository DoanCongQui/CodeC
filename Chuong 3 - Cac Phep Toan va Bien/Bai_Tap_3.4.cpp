#include <iostream>

int main ()
{
    int x;
    std::cout << "Nhap x = ";
    std::cin >> x;
    
    std::cout << x % 10 << (x / 10) % 10 << (x / 100) % 10;

}