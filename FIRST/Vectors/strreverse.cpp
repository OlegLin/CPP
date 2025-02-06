#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cout, std::cin;

int main(){
    std::vector<std::string> sortedd;
    std::string word;
    while (std::getline(cin, word)){
        sortedd.push_back(word);
    }
    std::sort(sortedd.rbegin(),sortedd.rend() );
    for (std::string newword : sortedd){
        cout << newword << '\n';
    }
}