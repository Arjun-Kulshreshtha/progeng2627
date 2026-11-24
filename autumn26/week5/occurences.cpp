#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;
    std::vector<int> indices;
    int n, temp;
    std::cin >> n;
    std::cout << std::endl;
    for (int i = 0; i<n; i++){
        std::cin >> temp;
        v.push_back(temp);
    }
    int s, counter = 0;
    std::cin >> s;
    for (int i = 0; i<n; i++){
        if (v[i] == s){
            counter++;
            indices.push_back(i);
        }
    }
    std::cout << counter << " At Indices: " << std::endl ;
        for (int i = 0; i<counter; i++){
        std::cout << indices[i] << std::endl;
    }
}