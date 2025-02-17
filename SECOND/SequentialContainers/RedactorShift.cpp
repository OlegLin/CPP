#include <iostream>
#include <list>
#include <string>
#include <vector>


// std::list<std::string> SHIFT(std::list<std::string> NO)

std::list<std::string> NewText(){
    std::list<std::string> newtext;
    std::string line;
    while (std::getline(std::cin, line) && line != ""){
        newtext.push_back(line);
    }

    return newtext;
}

auto Up(const std::list<std::string>& text, auto lastkursor){
    if (lastkursor != text.begin()){ lastkursor--;}
    return lastkursor;
}

auto Down(const std::list<std::string>& text, auto nextkursor){
    if (nextkursor != text.end()){ nextkursor++;}
    return nextkursor;
}

std::vector<std::string> Buffer(std::list<std::string> text, auto kursor, int n = 1){
    std::vector<std::string> buf;
    for (std::size_t i = 0; i != n; ++i){
        buf.push_back(*kursor);
        kursor++;
    }
    return buf;

}



int main(){
    std::list<std::string> text = NewText();
    std::string command;
    auto kursor = text.begin();
    while (std::getline(std::cin, command)){
        if (command == "Up"){
            kursor = Up(text, kursor);
            std::cout << *kursor;
        } else if (command == "Down"){
            kursor = Down(text, kursor);
            std::cout << *kursor;
        } else if (command == "Ctrl+X"){

        
    }
    }
    
    for (std::string elem : text){
        std::cout << elem << '\n';
    }

}