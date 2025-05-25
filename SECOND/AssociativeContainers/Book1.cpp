#include <map>
#include <iostream>
#include <algorithm>
#include <vector>


int main(){
    std::map<int, std::string> data;
    std::string word;
    int page, answerpage;
    int numbers;
    std::cin >> numbers;
    for (int i = 0; i != numbers; i++){
        std:: cin >> word >> page;
        data[page].insert(word);
    }

    

    for (auto const& [page, word] : data){
        std::cout << "word: " << word << " page:  " << page << '\n';
    }
}