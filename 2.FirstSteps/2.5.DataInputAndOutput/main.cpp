#include <iostream>
#include <string>



int main() {

    /*
    std::cout << "Hi my name is Muhammad Usama" << std::endl;

    int age {20};

    std::cout << "Age : " << age << std::endl;

    std::cerr << "Error Message: Something went wrong!" << std::endl;

    std::clog << "Something happend" << std::endl;
    */

    // Data input

    /*
    int age1;
    std::string name;

    std::cout << "Please type your name and age : " << std::endl;

    // std::cin >> name;
    // std::cin >> age1;

    std::cin >> name >> age1;

    std::cout << "Hello " << name << " you are " << age1 << " years old!" << std::endl;
    */

    // Data with spaces

    std::string full_name;
    int age3;

    std::cout << "Please type your full name and your age! " << std::endl;

    std::getline(std::cin, full_name);

    std::cin >> age3;

    std::cout << "Hello " << full_name << " you are " << age3 << " years old!" << std::endl;
    
    return 0; 
}
