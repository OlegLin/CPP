#include <map>
#include <iostream>
#include <algorithm>




int main(){
    std::map<std::string, int> data;
    std::string word, grammes = "";
    while(std::cin >> word){
        std::cout << size(word);
        for (int i = 0; i != size(word) - 1; ++i){
            std::cout << word[i] << word[i + 1]<<'\n';
            grammes = word[i] + word[i + 1];
            ++data[grammes];
        }
        std::cout << '\n' <<grammes << '\n';
        // ++data[word];
    }
    std::map<std::string, int> data1(data.begin(), data.end(),
                             [](const auto& p1, const auto& p2){
                                return p1.second < p2.second;
                             });

    for (auto const& [word, count] : data1){
        std::cout << word << ": " << count << '\n';
    }
}