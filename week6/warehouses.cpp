#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>


int search_vector(std::string s, const std::vector<std::string>& vin){
    for (int i = 0; i<vin.size(); i++){
        if(vin[i] == s){
            return i;
        }
    }
    return 0;
}

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for (int i = 0; i<vin1.size(); i++){
        vout.push_back(vin1[i]);
    }
    for (int i = 0; i<vin2.size(); i++){
        if (search_vector(vin2[i], vout) == 0){
            vout.push_back(vin2[i]);
        }
    }

}


void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for (int i = 0; i<vin2.size(); i++){
        if (search_vector(vin2[i], vin1) != 0){
            vout.push_back(vin2[i]);
        }
    }

}

int main(){
    std::ifstream warehouse1;
    std::ifstream warehouse2;
    std::vector<std::string> ware1;
    std::vector<std::string> ware2;
    std::vector<std::string> uni;
    std::vector<std::string> inter;


    warehouse1.open("warehouse1.txt");

    if(!warehouse1.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;
    while (warehouse1>>tmp){
        ware1.push_back(tmp);
    }
    warehouse1.close();
    

    warehouse2.open("warehouse2.txt");
    if(!warehouse2.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    while (warehouse2>>tmp){
        ware2.push_back(tmp);
    }
    warehouse2.close();


    union_vector(ware1, ware2, uni);
    intersection_vector(ware1, ware2, inter);

    std::ofstream unifile;
    unifile.open("union.txt");
        if(!unifile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    for (int i = 0; i<uni.size(); i++){
        unifile << uni[i] << std::endl;
    }
    unifile.close();

    std::ofstream interfile;
    interfile.open("intersection.txt");
        if(!interfile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    for (int i = 0; i<inter.size(); i++){
        interfile << inter[i] << std::endl;
    }
    interfile.close();

}





