#include <iostream>
#include <vector>
#include <cmath>

int min_vector_element(const std::vector<double>& vin){
    if (vin.size() == 0){
        return -1;
    }
    int out = 0;
    double start = vin[0];
    for (int i = 0; i < vin.size(); i++){
        if (vin[i] < start){
            out = i;
            start = vin[i];
        }
    }
    return out;
}

int main(){
// Test 1: Empty vector -> expected output is -1
    std::cout << (min_vector_element({}) == -1) << std::endl;

    // Test 2: First element is the minimum -> expected index is 0
    std::cout << (min_vector_element({1.0, 5.0, 3.0, 8.0}) == 0) << std::endl;

    // Test 3: Minimum element is in the middle -> expected index is 2
    std::cout << (min_vector_element({10.5, 4.2, 1.1, 7.8}) == 2) << std::endl;

    // Test 4: Minimum element is at the end -> expected index is 3
    std::cout << (min_vector_element({9.0, 8.0, 7.0, 2.0}) == 3) << std::endl;

    // Test 5: Vector with duplicate minimums -> expected index is first occurrence (0)
    std::cout << (min_vector_element({2.0, 5.0, 2.0, 8.0}) == 0) << std::endl;

    // Test 6: Fractional / negative values -> expected index is 1
    std::cout << (min_vector_element({-1.5, -4.8, 0.2, -3.1}) == 1) << std::endl;

    return 0;
}