#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
void part1(){
    std::ifstream inputFile("input/day2.txt");
    std::string line;

    int number_of_zeroes = 0;
    int val = 50;

    if (inputFile.is_open()) {
        std::getline(inputFile, line);
        std::stringstream ss(line);
        std::string token;
        while (std::getline(ss, token, ',')){
            std::cout << token << std::endl;
        }
        std::cout << "part 1:" << number_of_zeroes << std::endl;
    } else {
        // Print an error message if the file cannot be opened
        std::cerr << "Error: Unable to open file." << std::endl;
    }
}

int main() {
    part1();
    return 0;
}
