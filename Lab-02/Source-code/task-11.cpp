#include <iostream>
using namespace std;

int main()
{
    char lower;
    cout << "Enter a lowercase alphabet: ";
    cin >> lower;
    char upper = lower - 32;
    cout << "Uppercase alphabet: " << upper << endl;
    return 0;
}
