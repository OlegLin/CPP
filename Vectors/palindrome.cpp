#include <iostream>
#include <string>

using std::cout;
typedef std::string str_t;

int main(){
    bool answer;
    str_t string;
    std::getline(std::cin, string);
    // cout << string.find(' ') << '\n';
    // cout << string.size()<< '\n';
    while (string.find(' ') < string.size()){
        // cout << string.find(' ') << '\n';
        string.erase(string.find(' '), 1);
    }
    // cout << string << '\n';
    for (size_t i = 0; i != string.size() / 2; ++ i){
            if (string[i] == string[string.size() - i - 1]){
                answer = true;
            }
            else { answer = false;
                break;
            }
    } 
    answer ? cout << "YES\n" : cout << "NO\n";
}
