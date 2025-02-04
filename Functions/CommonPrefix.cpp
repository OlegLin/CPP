#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::string CommonPrefix(const std::vector<std::string>& words){
    std::string answer = "";
    bool flag = true;
    
    for (int i = 0; i != words[0].size(); ++i){
        for (int j = 0; j != words.size(); ++j){
            if (words[i][0] != words[i][j]){answer = false;}
        }
        if (flag){ answer += words[i][0]; 
        std::cout<< "YES  " << words[i][0] << "\n";  } 
        else {std::cout << "no";}
        
    }
    std::cout << answer;
    return answer;
}

    
    


int main(){
    std::vector<std::string> words = {"applic", "apl", "apasdfa"};

    CommonPrefix(words);


}