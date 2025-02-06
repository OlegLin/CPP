#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


std::vector<std::string> Split(const std::string& str, char delimiter){
    std::vector<std::string> answer;
    std::string word = "";

    for (const char& sym : str){
        if (sym != delimiter){
            word += sym;
        } else {answer.push_back(word);
        word = "";
        }
    }
    answer.push_back(word);

    return answer;

}



int main(){
    char symbol;
    std::string one = "What_is_your_name?", two = "13-24--08-11-2014";
    std::vector<std::string>  words;

    words = Split(two, '-');
    for (const auto& word : words){
        std::cout << word << '\n';
    }

 

}