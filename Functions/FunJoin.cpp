#include <iostream>
#include <vector>
#include <string>




std::string Join(const std::vector<std::string>& tokens, char delimiter){
    std::string answer;
    for (const std::string& word : tokens){
        answer += word + delimiter;
    
    }
    answer.pop_back();
    return answer;
}

int main(){
    std::vector<std::string> words = {"What", "is", "your", "name?"};

    std::cout<< Join(words, '_');

}