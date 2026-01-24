#include <iostream>
#include <fstream>
#include <string>

void part1(){
    std::ifstream inputFile("input/day1.txt");
    std::string line;

    int number_of_zeroes = 0;
    int val = 50;

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
            if(val == 0){
                number_of_zeroes++;
            }
        }

        std::cout << "part 1:" << number_of_zeroes << std::endl;
    } else {
        // Print an error message if the file cannot be opened
        std::cerr << "Error: Unable to open file." << std::endl;
    }
}

void part2(){
    std::ifstream inputFile("input/day1.txt");
    std::string line;

    int number_of_zeroes = 0;
    int val = 50;

    if (inputFile.is_open()) {
        while (std::getline(inputFile, line)) {
            int offset = std::stoi(line.substr(1));
            if(line[0] == 'R'){
                for(int i = 0; i < offset; i++){
                    val++;
                    if(val > 99){
                        val = 0;
                    } else if (val < 0){
                        val = 99;
                    }

                    if(val == 0){
                        number_of_zeroes++;
                    }
                }
            } else if(line[0] == 'L'){
                for(int i = 0; i < offset; i++){
                    val--;
                    if(val > 99){
                        val = 0;
                    } else if (val < 0){
                        val = 99;
                    }

                    if(val == 0){
                        number_of_zeroes++;
                    }
                }
            }
        }

        std::cout << "part 2:" << number_of_zeroes << std::endl;
    } else {
        // Print an error message if the file cannot be opened
        std::cerr << "Error: Unable to open file." << std::endl;
    }
}
int main() {
    part1();
    part2();
    return 0;
}
