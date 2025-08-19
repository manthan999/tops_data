#include <iostream>
using namespace std;
main() {
    // ---------- Implicit Type Conversion (Type Promotion) ----------
    int a = 10;
    double b = 5.5;

    double resultImplicit = a + b;

    cout << "Implicit Type Conversion Example:" << endl;
    cout << "int a = " << a << ", double b = " << b << endl;
    cout << "a + b (int + double) = " << resultImplicit 
         << " (automatically promoted to double)" << endl << endl;

    // ---------- Explicit Type Conversion (Type Casting) ----------
    double x = 9.78;

    int y = (int)x;
    int z = static_cast<int>(x); 

    cout << "Explicit Type Conversion Example:" << endl;
    cout << "double x = " << x << endl;
    cout << "int y = (int)x -> " << y << " (old style cast)" << endl;
    cout << "int z = static_cast<int>(x) -> " << z << " (modern style cast)" << endl;
}

