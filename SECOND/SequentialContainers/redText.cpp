#include <iostream>
#include <list>
#include <string>


int main(){
    std::list<std::string> text;
    std::string line, buffer;
    
    while (std::getline(std::cin, line)){
        if (line == ""){break;}
        text.push_back(line);
    }

    auto cursor = text.begin();

    while (std::getline(std::cin, line)){
        if (line == "Up" and cursor != text.begin()){
            cursor--;
            std::cout << "UUUUUUUUUUUUUUUUU'\n";
                       
        } else if (line == "Down" and cursor != text.end()){
            cursor++;
            // std::cout << "DDDDDDDDDDDDDDDDDDDDDD'\n";
                   
        } else if (line == "Ctrl+X" and *cursor != ""){
            buffer = *cursor;
            cursor = text.erase(cursor);
            // std::cout << "XXXXXXXXXXXXXXXXXXXXXX'\n";            
        } else if (line == "Ctrl+V" and buffer != ""){
            // std::cout << "IIIIIIIIIIIIIIIIIIII'\n";
            text.insert(cursor, buffer);
        }


    }
    for (std::string line : text){
        std::cout << line << '\n';
}

}