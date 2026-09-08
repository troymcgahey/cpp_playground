#include <iostream>
#include <string>

std::string askForName() {
    std::string name;

    std::cout << "What is your name? ";
    std::getline(std::cin, name);

    return name;
}

std::string askForActivity() {
    std::string activity;

    std::cout << "What is something you enjoy? ";
    std::getline(std::cin, activity);

    return activity;
}

int main() {

    std::string name = askForName();
    std::string activity = askForActivity();

    std::string message = "Hello, " + name + "! You said you enjoy " + activity + ".";

    std::cout << "\n" << message << "\n";

    std::string word = "Hello";

    for (std::size_t index = 0; index < word.size(); index++) {
        std::cout << "word[" << index << "] = "
                  << word[index] << "\n";
    }

    return 0;
}
