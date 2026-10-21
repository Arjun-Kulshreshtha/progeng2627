#include <iostream>

int main(){
    int upper, lower, guess, input;
    std::cout << "Enter upper bound";
    std::cin >> upper;
    std::cout << std::endl;
    std::cout << "Enter lower bound";
    std::cin >> lower;
    std::cout << std::endl;

    while (input != 0){
    guess = (upper - lower)/2 + lower;
    std::cout << guess << std::endl;
    std::cout << "Enter 0 if guess is your number, 1 if it is higher than your number and 2 if it is lower: " << guess;
    std::cin >> input;
    if (input == 1){
        upper = guess;
    } else if (input == 2){
        lower = guess;
    }
    std::cout << lower << " " << upper << std::endl;
}
}