#include <iostream>

int main() {
    // Compile time errors
    std::cout << "Hello World!" << std::endl;
   
    // Runtime Error
    int value = 7/0;
    std::cout << "Value :" << value << std::endl;

     return 0;
}
