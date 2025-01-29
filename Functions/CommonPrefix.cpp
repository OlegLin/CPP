#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::string CommonPrefix(const std::vector<std::string>& words){
    std::string answer = "";

    int n = words.size(), m = words[0].size();
    for (int i = 0; i != m; ++i){
        for (int j = 0; j != n; ++j){
            std::cout << words[j][i] << '\n';
        }
    }
    
}

int main(){
    std::vector<std::string> words = {"applic", "apl", "apasdfa"};

    CommonPrefix(words);


}