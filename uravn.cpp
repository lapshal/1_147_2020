#include "cstdio"
#include <math.h>
using namespace std;

int main()
{
	std::puts(" please enter a,b and c for `ax^2+bx+c=0`:");
	float a = 0;
	float b = 0;
	float c = 0;
	float D = 0;

	scanf_s("%f %f %f", &a, &b, &c);
	getchar();
	
	D = (b * b) - (4 * a * c);

	if (a == 0 && b == 0)
	{
		std::printf("No roots");
	}
	else
		if (a == 0 && b != 0)
		{
			double x;
			x = -c / b;
			std::printf("solution: x=%f\n", x);


		}

	if (D < 0)
	{
		std::printf("Error");
	}
	

	if (D > 0 && D != (b * b))
	{
		double x1 = 0;
		double x2 = 0;
		D = sqrt(D);
		x1 = (-b - D) / (2 * a);
		x2 = (-b + D) / (2 * a);
		std::printf("solution:x1=%f\n x2=%f\n", x1, x2);

	}
	
		if (D == 0 && a != 0 && b != 0 && c !=0 ); // здесь что-то не так, выводит всегда это почему-то
	{
		double x3;
		x3 = (-b) / (2 * a);
		std::printf("\nsolution: %f\n", x3);
	}

	

	return 0;

	
}