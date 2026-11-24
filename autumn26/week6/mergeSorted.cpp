#include <iostream>
#include <vector>
#include <fstream>


void merge_vectors_int(const std::vector<int>& v1, const std::vector<int>& v2, std::vector<int>& merged){
    int tmp1 = 0;
    int tmp2 = 0;
    for (int i = 0; i<v1.size() + v2.size() ; i++){
        if(v1[tmp1] <= v2[tmp2] && tmp1 < v1.size()){
            merged.push_back(v1[tmp1]);
            tmp1++;
        } 
        else if (tmp2 < v2.size() ) {
            merged.push_back(v2[tmp2]);
            tmp2++;
        }

        if (tmp1 >= v1.size()){
            for (int j = tmp2; j<v2.size(); j++){
                std::cout << v2[j] << std::endl;
                merged.push_back(v2[j]);
            }
            return;
        }
        if (tmp2 >= v2.size()){
            std::cout << "v1dump";
            for (int j = tmp1; j<v1.size(); j++){
                merged.push_back(v1[j]);
            }
            return;
        }
    }
}


int main(){

    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> out;

    std::vector<int> expected_output;

    v1 = {1, 3, 5, 6};
    v2 = {4, 6, 10};
    expected_output = {1, 3, 4, 5, 6, 6, 10};

    merge_vectors_int(v1, v2, out);

    if(out == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }
}