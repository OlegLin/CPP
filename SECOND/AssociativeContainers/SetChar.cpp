#include <iostream>
#include <set>
#include <vector>

std::set<char> OnlySym(std::string word){
    std::set<char> symb;
    for (char i : word){
        symb.insert(i);
    }
    return symb;
}

int main(){
    std::string newword;
    std::vector<std::set<char>> sym;
    while (std::cin >> newword){
        sym.push_back(OnlySym(newword));
        for (auto s : sym){
            for (auto i : s){
                std::cout<<i;
            }
            std::cout << '\n';
        }
        

    }
}