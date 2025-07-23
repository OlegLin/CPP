#include <vector>
#include <iostream>

template <typename T>
void Duplicate(std::vector<T>& v) {
    std::vector<T> neww = v;
    v.resize(v.size() * 2);
    auto iter = std::copy(neww.begin(), neww.end(), v.begin());
    std::copy(neww.begin(), neww.end(), iter);

}



int main() {
    std::vector<int> old = {1, 2, 3};
    std::vector<int> neww = {3, 6, 7, 5};
    Duplicate(old);

    for (auto elem : old){
        std::cout << elem << '\t' ;

    }
    std::cout << std::endl;

}