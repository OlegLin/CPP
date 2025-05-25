#include <string>
#include <map>
#include <iostream>
#include <vector>
#include <algorithm>


int main(){
    int numbers;
    std::multimap<std::string, int> data;
    std::string word;
    int pages;
    std:: cin >> numbers;
    std::string answerword;
    int answerpages = 0;
    

    for (int i = 0; i < numbers; i++){
        // std::cout << "num: " << numbers << " i:  " << i << '\n';
        std::cin >> word >> pages;
        data.insert({word, pages});
    }
    std::vector<std::pair<std::string, int>> SortbyMap(data.begin(), data.end());
    std::sort(SortbyMap.begin(), SortbyMap.end(),
        [](const auto& p1, const auto& p2) {
            return p1.second < p2.second;
        });

    for (const auto& [word, pages] : SortbyMap){
        std::cout << word << ": " << pages << '\n';
    }
    answerpages = ;


    for (const auto& [word, pages] : SortbyMap){
        
        std::cout << "pages: "<< pages <<"  answerpages:"<< answerpages << '\n';
        if (pages == answerpages){
            answerword += " " + word;
            std::cout<< "YEEEEEEEEEEEES  " << answerword<< '\n';
        } else {
            answerword.clear();
            answerpages = pages;
            std::cout << pages << " " << answerword;
        }
        
    }
}