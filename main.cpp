#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    try {
        if (b == 0) {
            throw "Division by zero is not allowed.";
        }

        cout << "Division = " << a / b << endl;
    }
    catch (const char* message) {
        cout << "Exception caught: " << message << endl;
    }

    cout << "Program continues after exception handling." << endl;

    return 0;
}
