#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    double res = 0;
    for (int i = 1; i <=n; ++ i){
        
        res += (1.0 / i) * (i % 2) - (1.0 / i) * ((i + 1) % 2);
        
    }
    cout << res<<"\n";
}