#include <iostream>
int main() {
    double num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    double product = num1 * num2;
    std::cout << "Product = " << product << std::endl;
    return 0;
}
