#include <iostream>

int modifyValue(int x) {
    x = 10;  // Modifies only the local copy
    return x;
}

void modifyReference(int &x) {
    x = 10;  // Modifies the original variable
}

int main() {
    int a = 5;
    int b = 5;
    
    modifyValue(a);
    modifyReference(b);

    std::cout << "a (pass by value): " << a << std::endl;  // Output: 5
    std::cout << "a (pass by value but the function returns the value so if we call the funtion hence, we are getting the modified value ): " << modifyValue(a) << std::endl;  // Output: 5
    std::cout << "b (pass by reference): " << b << std::endl;  // Output: 10

    return 0;
}
