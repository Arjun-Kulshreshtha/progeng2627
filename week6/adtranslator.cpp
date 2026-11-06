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
    return -1;
}

std::string translate_word(std::string word, const std::vector<std::string>& vin){
    int i = search_vector(word, vin);
    if (i%2 == 0 ){
        return vin[i+1];
    }
    else{
        return word;
    }
}


int main(){
    std::ifstream infile; 
    infile.open("ad.txt");

    std::vector<std::string> v;

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;

    while(infile >> tmp){
        v.push_back(tmp); 
        // instead of printing the values
        // as in the example above
        // first we store them in a vector
    }

    infile.close(); 

    std::ifstream trans; 
    trans.open("meaning.txt");

    std::vector<std::string> translation;

    if(!trans.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    while(trans >> tmp){
        translation.push_back(tmp); 
        // instead of printing the values
        // as in the example above
        // first we store them in a vector
    }

    trans.close(); 

    for (int i = 0; i<v.size(); i++){
        std::cout << translate_word(v[i], translation) << std::endl;
    }

}
