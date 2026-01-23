#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream inputFile("input/day1.txt");
    std::string line;

    if (inputFile.is_open()) {
        while (std::getline(inputFile, line)) {
            std::cout << line << std::endl;
        }
    } else {
        // Print an error message if the file cannot be opened
        std::cerr << "Error: Unable to open file." << std::endl;
    }

    return 0;
}

