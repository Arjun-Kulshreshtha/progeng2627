#include <iostream>
#include <vector>
#include <cmath>

int search_vector(int n, const std::vector<int>& vin){
    for (int i = 0; i < vin.size(); i++){
        if (vin[i] == n){
            return i;
        }

    }
    return -1;
}


int main(){
    // Test 1: Element found at the beginning -> expected index 0
    std::cout << (search_vector(10, {10, 20, 30, 40}) == 0) << std::endl;

    // Test 2: Element found in the middle -> expected index 2
    std::cout << (search_vector(30, {10, 20, 30, 40}) == 2) << std::endl;

    // Test 3: Element found at the end -> expected index 3
    std::cout << (search_vector(40, {10, 20, 30, 40}) == 3) << std::endl;

    // Test 4: Element not in the vector -> expected output -1
    std::cout << (search_vector(99, {10, 20, 30, 40}) == -1) << std::endl;

    // Test 5: Duplicate elements -> expected to return first occurrence (index 1)
    std::cout << (search_vector(5, {1, 5, 5, 5, 2}) == 1) << std::endl;

    // Test 6: Empty vector -> expected output -1
    std::cout << (search_vector(10, {}) == -1) << std::endl;

    // Test 7: Single element vector present -> expected index 0
    std::cout << (search_vector(7, {7}) == 0) << std::endl;

    // Test 8: Negative numbers -> expected index 1
    std::cout << (search_vector(-5, {0, -5, -10}) == 1) << std::endl;

    return 0;
}