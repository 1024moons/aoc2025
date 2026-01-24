#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream inputFile("input/day1.txt");
    std::string line;

    int number_of_zeroes = 0;
    long long int val = 50;

    if (inputFile.is_open()) {
        while (std::getline(inputFile, line)) {
            int offset = std::stoi(line.substr(1));
            if(line[0] == 'R'){
                val += offset;
            } else if(line[0] == 'L'){
                val -= offset;
            }

            if(val < 0) {
                val = 100 + (val % 100);
            }
            if(val > 99) {
                val = val % 100;
            }
            std::cout << line << " " << val << std::endl;

            if(val == 0){
                number_of_zeroes++;
            }
        }

        std::cout << number_of_zeroes << std::endl;
    } else {
        // Print an error message if the file cannot be opened
        std::cerr << "Error: Unable to open file." << std::endl;
    }

    return 0;
}

