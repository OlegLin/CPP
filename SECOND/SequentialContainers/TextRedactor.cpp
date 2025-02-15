#include <iostream>
#include <string>
#include <list>

auto Down




int main(){
    std::list<std::string> text;
    std::string action;

    while (std::cin >> action){
    switch (action)
    {
    case "up":
        std::cout << "UP\n"; 
        break;
    
    case "DOWN":
        std::cout << "DOWN'\n";
        break;
    
    default:
        std::cout << "THIS IS  WORK";
        break;
    }
}

}