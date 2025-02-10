#include <iostream>
#include <string>
#include <vector>
#include <deque> // DOUBLE ENDED !!!!


using std::cin;



int main(){
    int n;
    cin >> n;
    std::deque<std::string> lists;

    
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
