#include <iostream>

int main(){
    int input;
    std::cin >> input;
    std::cout << std::endl;
    while (input != 1){
        std::cout << input << std::endl;
        if (input%2 == 0){
            input = input/2;
        } else {
            input =  3*input + 1;
        }
    }  
    std::cout << input << std::endl; 
}