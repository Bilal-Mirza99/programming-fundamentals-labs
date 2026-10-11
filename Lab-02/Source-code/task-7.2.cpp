#include <iostream>
using namespace std;

int main()
{
    double length, width;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;
    double area = length * width;

    cout << "Area of Rectangle = " << area << endl;
    return 0;
}
