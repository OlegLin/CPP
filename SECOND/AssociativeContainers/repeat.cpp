#include <set>
#include <iostream>


int main(){
    int a;
    std::size_t n =0;
    std::set<int> answer;
    while (std::cin >> a){
        answer.insert(a);
        if (answer.size() == n){
            std::cout << "YES" << '\n';
        } else { std::cout << "NO\n";}
        n = answer.size();
    }
    
}