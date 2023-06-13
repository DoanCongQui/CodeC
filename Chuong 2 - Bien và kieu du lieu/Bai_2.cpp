#include <iostream>
#include <string>

int main ()
{
	std::string fullname = "", country = "";
	int age;
	float height, weight;
	char KQ;
	
	std::cout <<"Nhap ten cua ban: ";
	std::getline(std::cin, fullname); 
	
	std::cout <<"Nhap nam sinh: ";
	std::cin >> age;
	
	std::cin.ignore();
	
	std::cout <<"Nhap que quan: ";
	std::getline(std::cin, country);
	
	std::cout <<"Nhap chieu cao: ";
	std::cin >> height;
	
	std::cout <<"Nhap can nang: ";
	std::cin >> weight;
	
	std::cout <<"Nhap xep loai tot nghiep: ";
	std::cin >> KQ;
	
	std::cout << "\n";
	// Hien thi ket qua
	
	std::cout << "**************************************\n"
				"*********** SO YEU LY LICH ***********\n"
				"**************************************\n";
				
	std::cout << "Ho ten: " << fullname << "\n"
			<< "Sinh nam: " << age << "\n"
			<< "Que quan: " << country << "\n"
			<< "Chieu cao: " << height << "\n"
			<< "Can nang: " << weight << "\n"
			<< "Xep loai tot nghiep loai: " << KQ;
	
}
