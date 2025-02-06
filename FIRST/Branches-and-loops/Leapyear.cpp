#include <iostream>

int main(){
    int god;
    std::cin >> god;
    if (  (god % 4 == 0 && god % 100 != 0) || god % 400 == 0 ){
        std::cout << "YES"<<'\n';
    }
    else {
        std::cout<< "NO"<<'\n';
    }
}