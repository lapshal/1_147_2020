#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    double a;
    double b;
    double c;
    double x;
    cout << "введите a: ";
    cin >> a;
    cout << "введите b: ";
    cin >> b;
    cout << "введите c: ";
    cin >> c;
    if ((b * b - 4 * a * c) > 0) 
    {
        x = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
        cout << "x1 = " << x << endl;
        x = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);
        cout << "x2 = " << x << endl;
    }
    if ((b * b - 4 * a * c) == 0) 
    {
        x = ((-1 * b) / (2 * a));
        cout << "корень =" << x << endl;
    }
    if ((b * b - 4 * a * c) < 0) 
    {
        cout << "дискриминант < 0, корней нет." << endl;
    }

    return 0;
}
