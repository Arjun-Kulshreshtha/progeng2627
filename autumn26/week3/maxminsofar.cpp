#include <iostream>

int main(){
    int max, min, input;
    std::cin >> input;
    max = input;
    min = input;
    while(input != 0){
        std::cout << "Maximum so far is: " << max << std::endl;
        std::cout << "Minimum so far is: " << min << std::endl;
        std::cin >> input;

        if (input > max){
            max = input;
        } else if (input < min){
            min = input;
        }
    }
}