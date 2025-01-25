#include <iostream>
using namespace std;

int main() {
    float km;
    cout << "Enter weight of a person in kilograms: ";
    cin >> km;

    float pound = km * 2.2;

    float km2 = static_cast<int>(km * 100) / 100.0;
    float pound2 = static_cast<int>(pound * 100) / 100.0;

    cout << "Person's weight in kilograms: " << km2 << endl;
    cout << "Person's weight in pounds: " << pound2 << endl;

    return 0;
}

