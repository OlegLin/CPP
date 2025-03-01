#include <iostream>
#include <set>
#include <vector>
#include <map>

std::set<char> OnlySym(std::string word){
    std::set<char> symb;

    for (const char& i : word){
        symb.insert(i);
    }
    return symb;
}

int main(){
    std::string newword;
    std::map<char, size_t> numbers;
    std::vector<std::set<char>> sym;
    while (std::cin >> newword){
        sym.push_back(OnlySym(newword));     

    }

    for (std::set word : sym){
        for (const char& i : word){
            ++numbers[i];
        }
    }
    

    for (const auto& [key, value] : numbers){
        // std::cout << key << ':' << value <<':' << sym.size() << '\n' ;
        if (value == sym.size()){
            std::cout << key ;
        }
    }
    std::cout << '\n';

}