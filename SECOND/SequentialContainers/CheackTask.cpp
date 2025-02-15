#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <deque>
#include <list>
#include <array>
#include <algorithm>




int main(){
    std::deque<std::string> people;
    std::string fam, side;
    std::size_t n, x, k;
    std::cin >> n;

    for (std::size_t i =0; i != n; ++i){
        std::cin >> fam >> side;
        if (side == "top"){
            people.push_front(fam);
        } else {people.push_back(fam);}
    }


    std::cin >> x;
    for (std::size_t i = 0; i != x; ++i){
        std::cin>>k;
        std::cout << people[k-1] << '\n';
    }
    
}