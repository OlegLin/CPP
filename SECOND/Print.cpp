#include <iostream>
#include <vector>
#include <array>
#include <deque>
#include <list>
#include <string>


template <typename T>
void Print(const T& neww, std::string delimeter){

    for (const auto& elem : neww){
        std::cout << elem ;
        if (elem != neww[neww.size() - 1]){
            std::cout << delimeter;
        }
    }
    std::cout<<'\n';
    
}


int main(){
    std::vector<std::string> datatext = {"asdas", "asda", "asdad"};
    std::vector<int> data = {1, 2, 3, 4};
    Print(data, ", ");
    Print(datatext, " ");
}