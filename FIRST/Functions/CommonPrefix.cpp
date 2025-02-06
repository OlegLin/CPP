#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


bool operator < (std::string lw, std::string rw) {
    return lw.size() < rw.size();
}

std::string CommonPrefix(const std::vector<std::string>& words){
    std::string prefix = "";
    if (!words.empty()){
    std::vector<std::string> sortwords = words;
    bool flag = true;

    std::sort(sortwords.begin(), sortwords.end());
    
    for (std::size_t j = 0; j != sortwords[0].size(); ++j){
        for (std::size_t i = 0; i != sortwords.size(); ++i){
            if (sortwords[i][j] != sortwords[0][j]){
                flag = false;
            }
            
        }

        if (flag){prefix += sortwords[0][j]; } else {break;}
    }

    }
    return prefix;
}


int main(){
    std::vector<std::string> stringg = {};

    std::cout<< CommonPrefix(stringg) << '\n';

}