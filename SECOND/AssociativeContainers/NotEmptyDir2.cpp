#include <iostream>
#include <set>
#include <vector>
#include <string>


std::string NoEndF(const std::string& dir){
    std::string noend;
    std::vector<std::string> doit;
    for (const char& i : dir){
        if (i == '/' ){
            doit.push_back(noend);
            noend = "";
        } else { noend += i;}
    }
    noend = "";
    for (std::string i : doit){
        noend += i + "/" ;
    }
    return noend;
}


int main(){
    std::set<std::string> alldirect;
    std::string direct;

    while (std::cin >> direct){
        while (direct != ""){
        direct = NoEndF(direct).erase(NoEndF(direct).size() - 1);
        alldirect.insert(direct);
        }
    }

    for (std::string dir : alldirect){
        std::cout<< dir + "/" << '\n';
    }

}