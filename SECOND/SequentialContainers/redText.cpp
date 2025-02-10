#include <iostream>
#include <list>
#include <string>

std::list<std::string> AddText(){
    std::string action;
    std::list<std::string> text;
    while (std::getline(std::cin, action)){
        if(action != ""){
            text.push_back(action);
        }
        else { text.push_back(action);
                break; }
                
    }
    return text;

}






int main(){
    std::list<std::string> TEXT = AddText();
    auto iter = TEXT.begin();
    std::string command, buffer;

    

    while (std::getline(std::cin, command)){
        if (command == "Down" and iter != TEXT.end()){
            ++iter;
        } else if (command == "Up" and iter != TEXT.begin()){
            --iter;
        } else if (command == "Ctrl+X"){
            buffer = *iter;
            iter = TEXT.erase(iter);
        } else if (command == "Ctrl+V"){
                TEXT.insert(iter, buffer);
        }

    }

    for (std::string elem : TEXT){
        std::cout << elem << '\n';
    }

    
    
    
}