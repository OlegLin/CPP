#include <iostream>
#include <vector>
#include <array>
#include <deque>
#include <list>
#include <string>


template <typename T>
void Print(const T& neww, std::string delimeter){
    if (!neww.empty()){
    std::cout << *neww.begin();
    for (auto iter = std::next(neww.begin()); iter != neww.end(); ++iter){
        std::cout << delimeter << *iter; 
    }
    std::cout<<'\n';}
    
}


int main(){
    std::vector<std::string> datatext = {"asdas", "asda", "asdad"};
    std::vector<int> data = {1, 2, 3, 4};
    std::vector<int> datae = {};

    Print(data, ", ");
    Print(datae, ", ");
    Print(datatext, " ");
}
