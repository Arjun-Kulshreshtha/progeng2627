#include <iostream>
#include <vector>

void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){
    vout.clear();
    for (int i = 0; i<vin1.size(); i++){
        vout.push_back(vin1[i]);
    }
    for (int i = 0; i<vin2.size(); i++){
        vout.push_back(vin2[i]);
    }
}


int main(){
    // Helper function check logic inline
    
    // Test 1: Standard two non-empty vectors -> expected {1, 2, 3, 4, 5, 6}
    {
        std::vector<int> vout;
        append_vectors({1, 2, 3}, {4, 5, 6}, vout);
        std::cout << (vout == std::vector<int>{1, 2, 3, 4, 5, 6}) << std::endl;
    }

    // Test 2: First vector empty -> expected {4, 5, 6}
    {
        std::vector<int> vout;
        append_vectors({}, {4, 5, 6}, vout);
        std::cout << (vout == std::vector<int>{4, 5, 6}) << std::endl;
    }

    // Test 3: Second vector empty -> expected {1, 2, 3}
    {
        std::vector<int> vout;
        append_vectors({1, 2, 3}, {}, vout);
        std::cout << (vout == std::vector<int>{1, 2, 3}) << std::endl;
    }

    // Test 4: Both input vectors empty -> expected empty vector {}
    {
        std::vector<int> vout;
        append_vectors({}, {}, vout);
        std::cout << (vout == std::vector<int>{}) << std::endl;
    }

    // Test 6: Vectors containing negative numbers and zeroes -> expected {-1, 0, 1, -2}
    {
        std::vector<int> vout;
        append_vectors({-1, 0}, {1, -2}, vout);
        std::cout << (vout == std::vector<int>{-1, 0, 1, -2}) << std::endl;
    }

    return 0;
}