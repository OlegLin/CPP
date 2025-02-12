#include <iostream>
#include <list>
#include <string>
#include <vector>


// std::list<std::string> SHIFT(std::list<std::string> NO)

std::list<std::string> NewText(){
    std::list<std::string> newtext;
    std::string line;
    while (std::getline(std::cin, line)){
        newtext.push_back(line);
    }

    return newtext;
}

auto Up(const std::list<std::string>& text, auto& lastkursor){
    if (lastkursor != text.begin()){ lastkursor--;}
    return lastkursor;
}






int main(){
    std::list<std::string> text = NewText();
    std::string command;
    auto kursor = text.begin();
    while (std::getline(std::cin, command)){
        if (command == "Up"){
            Up(text, kursor);
        }
    }
    
    for (std::string elem : text){
        std::cout << elem << '\n';
    }
}