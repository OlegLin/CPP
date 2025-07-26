#include <iostream>
#include <vector>

template <typename Iter>
Iter Unique(Iter first, Iter last){
    auto lastfirst = first;
    
    ++first;
    while (first != last){
        
        if (*lastfirst == *first){
            
            ++first;
        } else{
            
            ++lastfirst;
            *lastfirst = *first;
            
        }
    }
    ++lastfirst;
    return lastfirst;
}


int main(){
    std::vector<int> v = {};
    for (auto elem : v){
        std::cout<< elem << '\t' << "asda";
    }
    std::cout << '\n' ;
    auto iter = Unique(v.begin(), v.end());
    
    for (auto elem : v){
        std::cout<< elem << '\t';
    }
    std::cout << '\n';
    std::cout << *iter << '\n';
}