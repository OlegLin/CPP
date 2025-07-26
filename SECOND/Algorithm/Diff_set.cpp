#include <iostream>
#include <vector>
// #include <algorithm>


template <typename InIter1, typename InIter2, typename OutIter>
OutIter SetDifference(InIter1 first1, InIter1 last1,
                      InIter2 first2, InIter2 last2,
                      OutIter out){
            auto iter = first2;            
            while (first1 != last1){
                first2 = iter;
                while (first2 != last2){
                    if (*first1 == *first2){
                        break;
                    } else{
                        ++first2;
                    }
                }
                if (first2 == last2){
                    *out = *first1;
                    ++out;
                } 
                ++first1;
            }
            return out;
                      }


int main(){
    std::vector<int> one = {1, 3, 5, 6, 7, 8, 9, 10}, two = {3, 7, 8, 20}, three;
    three.resize(10);
    auto iter = SetDifference(one.begin(), one.end(), two.begin(), two.end(), three.begin());

    for (auto elem : one){
        std::cout << elem << '\t';
    }
    std::cout << '\n';
    for (auto elem : two){
        std::cout << elem << '\t';
    }
    std::cout << '\n';
    for (auto elem : three){
        std::cout << elem << '\t';
    }
    --iter;
    std::cout << '\n' << *iter << '\n';
    
}