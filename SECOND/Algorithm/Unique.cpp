#include <iostream>
#include <vector>

template <typename Iter>
Iter Unique(Iter first, Iter last){
    std::cout<<"QWERT"<<'\t';
    ++first;
    while (first != last){
        auto lastiter = --first;
        if (*first == *lastiter){
            std::cout << *first << '\t';
        }
        ++first;
    }
    return last;
}


int main(){
    std::vector<int> v = {1,2,2,2,3,3,4,5,6,5,5};
    Unique(v.begin(), v.end());
}