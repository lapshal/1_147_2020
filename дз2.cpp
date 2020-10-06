#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    double a;
    double b;
    double c;
    double x1;
    double x2;


    cout << "vvedite znacheniye a: ";
    cin >> a;
    cout << "vvedite znacheniye b: ";
    cin >> b;
    cout << "vvedite znacheniye c: ";
    cin >> c;

    if ((b * b - 4 * a * c) > 0)
    {
        x1 = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
        cout << "pervuy koren raven" << x1;
        x2 = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);
        cout << "vtoroy koren raven" << x2;
    }

    if ((b * b - 4 * a * c) == 0)
    {
        x1 = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
        cout << "koren raven" << x1;
    }

    if ((b * b - 4 * a * c) < 0)
    {
        cout << "korney net";
    }
    return 0;
}