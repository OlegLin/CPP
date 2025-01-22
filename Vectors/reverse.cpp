#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
typedef int number_t;

int main(){
    
    number_t n, x;
    std::cin >> n;
    std::vector<int> seat, guest(n);
    for (size_t i = 0; i != n; ++i){
        std::cin >> x;
        seat.push_back(x);
    }

    for (size_t i = 0; i != n; ++i){
        
        guest[i] = seat[i];
    }

    for (size_t i = 0; i != n; ++i){
        
        cout << guest[i] << '\t';
    }
    cout << '\n';


}