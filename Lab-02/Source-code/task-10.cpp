#include <iostream>
using namespace std;

int main()
{
    int var1, var2, temp;
    cout << "Enter value of var1: ";
    cin >> var1;

    cout << "Enter value of var2: ";
    cin >> var2;

    cout << "\nBefore swapping:" << endl;
    cout << "var1 = " << var1 << endl;
    cout << "var2 = " << var2 << endl;

    temp = var1;
    var1 = var2;
    var2 = temp;

    cout << "\nAfter swapping:" << endl;
    cout << "var1 = " << var1 << endl;
    cout << "var2 = " << var2 << endl;

    return 0;
}
