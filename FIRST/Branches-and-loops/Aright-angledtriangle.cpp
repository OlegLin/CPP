#include <iostream>

int main(){
    int a, b, c, mi, ma, sr;
    std::cin >> a >> b >> c;
    mi = std::min(a, std::min(b,c));
    ma = std::max(a, std::max(b, c));
    sr = a+b+c - mi - ma;
    if (ma > sr + mi){
        std::cout << "UNDEFINED" ; 
    } else if (ma * ma == sr * sr + mi * mi){
        std::cout << "YES" ;
    } else {
        std::cout << "NO";
    }
    std::cout << '\n';


}