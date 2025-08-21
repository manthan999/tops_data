#include <iostream>
using namespace std;

main() {
    int rows;
    
	    cout << "Enter the number of rows for the triangle: ";
    cin >> rows;
    
    if (rows <= 0) {
    cout << "Please enter a positive number greater than 0 \n";
}

    
     for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << " *";
        }
        cout <<"\n";
    }
}

