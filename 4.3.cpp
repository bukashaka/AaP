#include <iostream>

int main()
{
	long double a, b, c;
	std::cout << "Vvedite dlini storon treugolnika";
	std::cin >> a >> b;
	std::cout << "Vvedite ugol mezdu storonami";
	std::cin >> c;
	std::cout << static_cast<double>(1) / 2 * a * b * sin(c);
};