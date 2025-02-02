#include <iostream>
#include <string>

using namespace std;

// Showing different types of variables
void typeSystem() {
    int x = 21;  // Integer
    bool y = true;  // boolean
    double z = 9.8;  // Double

    cout << "x is an int with value: " << x << endl;
    cout << "y is a boolean with value: " << y << endl;
    cout << "z is a double with value: " << z << endl;
}

// Using lambda functions for closures
auto outerFunction() {
    string out_var = "Outer";  

    // Returns a lambda function that forms a closure
    return [out_var]() {
        return "Accessing outer variable: " + out_var;
    };
}
int main() {
    
    typeSystem();
    // Gettings the closure from outerFunction
    auto closure = outerFunction();
    cout << closure() << endl;  // Calling the closure function

    return 0;
}
