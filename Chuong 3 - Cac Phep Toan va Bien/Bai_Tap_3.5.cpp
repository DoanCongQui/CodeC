#include <iostream>
#include <cmath>

int main ()
{
    float xA, yA, xB, yB, xC, yC;
    std::cout << "Nhap toa do A: ";
    std::cin >> xA >> yA;
    std::cout << "Nhap toa do B: ";
    std::cin >> xB >> yB;
    std::cout << "Nhap toa do C: ";
    std::cin >> xC >> yC;
    
    // Độ dài 3 đoạn thẳng AB, AC. BC
    float AB = sqrt(pow(xB - xA, 2) + pow(yB - yA, 2));
    float AC = sqrt(pow(xC - xA, 2) + pow(yC - yA, 2));
    float BC = sqrt(pow(xC - xB, 2) + pow(yC - yB, 2));
    
    // Nữa chu vi cua tam giác ABC
    float p = (AB + AC + BC) / 2;
    
    // Bán kính đường tròn nội tiếp tam giác ABC
    float r = sqrt(((p - AB) * (p - AC ) * (p - BC)) / p);

    //Góc giữa 2 đoạn thẳng OA và OB
    double Cosa = acos(abs(xA * xB + yA * yB) / (sqrt(xA * xA + yA * yA) * sqrt(xB * xB + yB * yB)));

    std::cout << "Do dai doan thang AB: " << sqrt(pow(xB - xA, 2) + pow(yB - yA, 2)) << "\n";
    std::cout << "Do dai doan thang OI: " << sqrt(pow((xA + xB) / 2, 2) + pow((yA + yB) / 2, 2)) << "\n";
    std::cout << "Do dai doan thang OG: " << sqrt(pow((xA + xB + xC) / 3, 2) + pow((yA + yB + yC) / 3, 2)) << "\n";
    std::cout << "Dien tich tam giac ABC: " << sqrt(p * (p - AB) * (p - AC ) * (p - BC)) << "\n";
    std::cout << "Dien tich hinh tron noi tiep tam giac ABC: " << r * r * 3.14 << "\n";
    std::cout << "Goc giua 2 doan thang OA va OB: " << Cosa * 180 / 3.14;

}