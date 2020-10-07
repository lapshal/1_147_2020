#include <iostream>
#include <cmath> 

int main()
{
	double a;
	double b;
	double c;
	double x1;
	double x2;
	double test;
	double D;
	std::cout << "a: ";
	std::cin >> a;
	std::cout << "b: ";
	std::cin >> b;
	std::cout << "c: ";
	std::cin >> c;
		D = b * b - 4 * a*c;
	    if (D < 0)
		{
			std::cout << "No solution (D<0)";
		}
		if (D == 0)
		{
			x1 = -b / a * c;
			std::cout <<"Solution:" << x1;
		}
		if (D > 0)
		{
			x1 = (-b + sqrt(D)) / 2 * a;
			x2 = (-b - sqrt(D)) / 2 * a;
			std::cout << "Solution: (" << x1 << "," << x2 << ")";
		}
        return 0;   
	}