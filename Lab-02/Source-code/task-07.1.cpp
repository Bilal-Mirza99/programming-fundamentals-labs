#include <iostream>
using namespace std;

int main()
{
    double radius;
    const double PI = 3.14159;

    cout << "Enter radius of circle: ";
    cin >> radius;

    double area = PI * radius * radius;

    cout << "Area of Circle = " << area << endl;

    return 0;
}
