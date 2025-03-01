#include <iostream>
#include <set>
#include <vector>
#include <string>


std::vector<std::string> Separator(std::string dir){
    std::vector<std::string> sep;
    std::string forvector = "";
    for (const char& i : dir){
        if (i == '/'){
            sep.push_back(forvector);
            forvector = "";
        } else {
            forvector += i;
        }
        
    }
    return sep;
}

int main(){
    std::string dir;
    std::set<std::vector<std::string>> folder;
    while(std::cin >> dir){
        folder.insert(Separator(dir)); 
    }

    for (std::vector<std::string> direct : folder){
        for (std::string fol : direct){
            std::cout << fol << "/" ;
        }
        std::cout << '\n';
    }
}