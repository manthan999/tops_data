#include <iostream>
using namespace std;
main() {
    int a = 10, b = 3;
    // ----------------- Arithmetic Operators -----------------
    cout << "Arithmetic Operators:" << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << " (integer division)" << endl;
    cout << "a % b = " << (a % b) << " (remainder)" << endl << endl;
    // ----------------- Relational Operators -----------------
    cout << "Relational Operators:" << endl;
    cout << "a == b -> " << (a == b) << endl;
    cout << "a != b -> " << (a != b) << endl;
    cout << "a > b  -> " << (a > b) << endl;
    cout << "a < b  -> " << (a < b) << endl;
    cout << "a >= b -> " << (a >= b) << endl;
    cout << "a <= b -> " << (a <= b) << endl << endl;
    // ----------------- Logical Operators -----------------
    bool x = true, y = false;
    cout << "Logical Operators:" << endl;
    cout << "x && y -> " << (x && y) << endl;
    cout << "x || y -> " << (x || y) << endl;
    cout << "!x     -> " << (!x) << endl << endl;
    // ----------------- Bitwise Operators -----------------
    cout << "Bitwise Operators (on a=10, b=3):" << endl;
    cout << "a & b (AND)  = " << (a & b) << endl;
    cout << "a | b (OR)   = " << (a | b) << endl;
    cout << "a ^ b (XOR)  = " << (a ^ b) << endl;
    cout << "~a (NOT)     = " << (~a) << endl;
    cout << "a << 1 (Left Shift)  = " << (a << 1) << endl;
    cout << "a >> 1 (Right Shift) = " << (a >> 1) << endl;
}

