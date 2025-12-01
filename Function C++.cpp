#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    cout << "Enter a, b, and c: ";
    cin >> a >> b >> c;

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Two real roots: " << x1 << " and " << x2 << endl;
    }
    else if (discriminant == 0)
    {
        double x = -b / (2 * a);
        cout << "One real root: " << x << endl;
    }
    else
    {
        cout << "No real roots (discriminant is negative)." << endl;
    }

    return 0;
}
