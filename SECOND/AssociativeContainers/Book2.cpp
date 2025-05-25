#include <iostream>
#include <algorithm>
#include <map>
#include <set>

int main(){
    std::map<int, std::set<std::string>> data;
    int numbers, page;
    std::string word;
    std::cin >> numbers;
    for (int i = 0; i != numbers; ++i){
        std::cin >> word >> page;
        data[page].insert(word);
        
    }
    
    for (const auto& [page, words] : data){
        std::cout <<  page << ' ';
        for (const auto& word : words){
            std::cout << word << ' ';
        }
        std::cout << '\n';
    }



}