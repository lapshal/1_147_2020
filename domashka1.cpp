  
#include <iostream>
double firstNumber;
double secondNumber;
double thirdNumber;
double fourthNumber;
double avg;

int main() {
    std::cout << "Imput first number\n";
    std::cin >> firstNumber;
    std::cout << "Input second number\n";
    std::cin >> secondNumber;
    std::cout << "Input third number\n";
    std::cin >> thirdNumber;
    std::cout << "Input fourth number\n";
    std::cin >> fourthNumber;
    avg=(firstNumber+secondNumber+thirdNumber+fourthNumber)/4;
    std::cout << "Average of these numbers: " << avg;
    return 0;
}