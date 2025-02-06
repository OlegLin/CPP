#include <string>
#include <iostream>


int main(){
    std::string pass;
    std::cin >> pass;
    bool sizee = false, digit = false, Big = false, small = false, symb = false;

    if (pass.size() > 7 && pass.size() < 15){
        sizee = true;
    }


    for (char elem : pass){
        if (int(elem) < 58 && int(elem) > 47 ) { 
            digit = true;
        } else if (int(elem) < 91 && int(elem) > 64 ){
            Big = true;
        }  else if (int(elem) < 123 && int(elem) > 96 ){
            small = true;
        } else if (int(elem) < 127 && int(elem) > 32 ){
            symb = true;
        }     
        
    }

    if ((small + Big +digit + symb) > 2 && sizee){
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
    std::cout << '\n';
    // std::cout << small << Big << digit << symb << '\n';
    // for (int i = 33; i != 126; ++i){
        
    // std::cout << i << char(i) << '\t'; 
    // }
    // std::cout << '\n';
}