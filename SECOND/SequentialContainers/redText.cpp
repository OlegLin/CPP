#include <iostream>
#include <list>
#include <string>


int main(){
    std::list<std::string> text;
    std::string line, buffer;
    
    while (std::getline(std::cin, line)){
        if (line == ""){//text.push_back(line);
            break;}
        text.push_back(line);
    }

    auto cursor = text.begin();

    while (std::getline(std::cin, line)){
        while (line == "Up" || line == "Down")
        {
            
        
        
        if (line == "Up" && cursor != text.begin()){
            cursor--;
            // std::cout << "UUUUUUUUUUUUUUUUU'\n";
                       
        } else if (line == "Down" && cursor != text.end()){
            cursor++;
            // std::cout << "DDDDDDDDDDDDDDDDDDDDDD'\n";
                   
        } } 
        
        
        if (line == "Ctrl+X" && cursor != text.end()){
            buffer = *cursor;
            cursor = text.erase(cursor);
            // std::cout << "XXXXXXXXXXXXXXXXXXXXXX'\n";            
        } else if (line == "Ctrl+V" && buffer != ""){
            // std::cout << "IIIIIIIIIIIIIIIIIIII'\n";
            text.insert(cursor, buffer);
        }


    }
    for (std::string line : text){
        std::cout << line << '\n' ;
}
   
}