#include <iostream>
#include <vector>


using namespace std;

int main(){
    
    int n, x;
    std::cin >> n;
    std::vector<int> seat, guest(n);
    for (int i = 0; i != n; ++i){
        std::cin >> x;
        seat.push_back(x);
    }

    for (int i = 0; i != n; ++i){
        
        guest[seat[i] - 1] = i + 1;
    }

    for (int i = 0; i != n; ++i){
        
        cout << guest[i] << '\t';
    }
    cout << '\n';


}