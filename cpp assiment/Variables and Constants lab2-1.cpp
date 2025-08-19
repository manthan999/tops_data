#include <iostream>
using namespace std;

int main() {
    
	const float PI = 3.14159;
    
	int age = 20;
    float height = 5.9;
    char grade = 'A';

    int nextYearAge = age + 1;
    float circleArea = PI * (height * height); 

    cout << "Age: " << age << endl;
    cout << "Next Year Age: " << nextYearAge << endl;
    cout << "Height: " << height << endl;
    cout << "Grade: " << grade << endl;
    cout << "Constant PI: " << PI << endl;
    cout << "Area of Circle (radius = height): " << circleArea << endl;

}
