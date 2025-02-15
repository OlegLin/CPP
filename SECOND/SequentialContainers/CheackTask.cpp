#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <deque>
#include <list>
#include <array>
#include <algorithm>





using std::cin;



int main(){
<<<<<<< HEAD
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
=======
    int n;
    cin >> n;
    std::deque<std::string> lists;

>>>>>>> c21ebfce049b34fa813d5b986157d2baf9ad6bc6
    
    for (int i = 0; i != n; ++i){
        std::string family;
        std::string put;
        cin >> family >> put;
        if (put == "top"){
            lists.push_front(family);
        } else {lists.push_back(family);}

    }
    for (std::string elem : lists){
        std::cout << elem << '\t';
    }

    std::cout << '\n';

}
