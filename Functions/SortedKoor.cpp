#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool operator < (const std::pair<int, int>& lk, const std::pair<int, int>& rk){
    return lk.first * lk.first + lk.second * lk.second < rk.first * rk.first + rk.second * rk.second;
}


int main(){
    int n;
    std::cin >> n;
    int x,y;
    std::vector<std::pair<int, int>> koor(n);

    for ( int i = 0; i != n; ++i){
        std::cin >> x >> y;
        koor[i].first = x;
        koor[i].second = y;
    }

    std::sort(koor.begin(), koor.end());

    

    for ( const auto& xy : koor){
        std::cout << xy.first << " " << xy.second << '\n';
    }

}