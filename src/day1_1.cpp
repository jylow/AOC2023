#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string line;
    int sum = 0;
    std::ifstream fileReader("day1_1.in");

    while(std::getline(fileReader, line)){
//        std::cout << line << std::endl;
        for (int i = 0; i < line.size(); i++) {
            if(isdigit(line[i])) {
                sum += (line[i] - '0')* 10;
                break;
            }
        }
        for (int i = line.size() - 1; i >= 0; i--) {
            if(isdigit(line[i])) {
                sum += line[i] - '0';
                break;
            }
        }
    }

    std::cout << sum << std::endl;
}
