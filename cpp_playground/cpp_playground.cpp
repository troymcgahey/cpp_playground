#include <iostream>
#include <string>

int main() {

    std::string firstName;
    std::string favoriteThing;

    std::cout << "What is your name? ";
    std::getline(std::cin, firstName);

    std::cout << "What is something you enjoy? ";
    std::getline(std::cin, favoriteThing);

    std::string message = "Hello, " + firstName + "! You said you enjoy " + favoriteThing + ".";

    std::cout << "\n" << message << "\n";

    return 0;
}
