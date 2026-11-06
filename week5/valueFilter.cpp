#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;
    int n, temp;
    std::cin >> n;
    std::cout << std::endl;
    for (int i = 0; i<n; i++){
        std::cin >> temp;
        v.push_back(temp);
    }
    int t;
    std::cin >> t;
    for (int i = 0; i<n; i++){
        if (v[i] < t){
            std::cout << v[i] << std::endl;
        }
    }
}