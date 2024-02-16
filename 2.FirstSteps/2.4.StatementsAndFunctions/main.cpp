#include <iostream>

int addNumbers (int first_param, int second_param) {
    int result = first_param + second_param;
    return result;
}

int multiNumber (int first_param, int second_param) {
    int result = first_param * second_param;
    return result;
}

int main() {

    int first_number {31}; // Statement
    int second_number {7};

    std::cout << "First Number :" << first_number << std::endl;
    std::cout << "Second Number :" << second_number << std::endl;

    int sum = first_number + second_number;
    std::cout << "Sum : " << sum << std::endl;

    sum = addNumbers(25,7);
    std::cout << "Function Sum : " << sum << std::endl;

    sum = addNumbers(100,100);
    std::cout << "Function Sum 2 : " << sum << std::endl; 

    std::cout << "Direct Sum : " << addNumbers(100, 25) << std::endl;

    std::cout << "Multiply Function : " << multiNumber(10,5) << std::endl;
    
    return 0; 
}
