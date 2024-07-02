#include <iostream>
#include <string>

bool is_number(const std::string& str) {
    for (char c : str) {
        if (!std::isdigit(c)) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string input;

    while (true) {
        std::cout << "Enter a number between 1 and 10: ";
        std::cin >> input;

        // Check if input is a number
        if (is_number(input)) {
            int number = std::stoi(input);
            // Check if the number is in the valid range
            if (number >= 1 && number <= 10) {
                std::cout << "You entered a valid number: " << number << std::endl;
                break; // Exit loop if input is valid
            } else {
                std::cout << "\rInvalid input, please try again.        " << std::flush;
            }
        } else {
            std::cout << "\rInvalid input, please try again.        " << std::flush;
        }
    }

    return 0;
}
