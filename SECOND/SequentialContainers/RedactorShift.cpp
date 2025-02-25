#include <iostream>
#include <list>
#include <string>
#include <vector>
#include <deque>


// std::list<std::string> SHIFT(std::list<std::string> NO)

std::list<std::string> NewText(){
    std::list<std::string> newtext;
    std::string line;
    while (std::getline(std::cin, line) && line != ""){
        newtext.push_back(line);
    }

    return newtext;
}

auto Up(const std::list<std::string>& text, std::list<std::string>::iterator lastkursor){
    if (lastkursor != text.begin()){ lastkursor--;}
    return lastkursor;
}

auto Down(const std::list<std::string>& text, std::list<std::string>::iterator nextkursor){
    if (nextkursor != text.end()){ nextkursor++;}
    return nextkursor;
}


std::deque<std::string> BufferUp(std::deque<std::string> buffer, std::string kursor){
    for (std::string elem : buffer){
        std::cout << "bufer**************\n" << elem << '\n';
    }
    std::cout << "bufer********************\n";
    buffer.push_front(kursor);
    for (std::string elem : buffer){
        std::cout << "bufer**************\n" << elem << '\n';
    }
    std::cout << "bufer********************\n";
    return buffer; 
}







int main(){
    std::list<std::string> text = NewText();
    std::deque<std::string> buffer;
    std::string command;
    int n = 1;
    auto kursor = text.begin();
    
    while (std::getline(std::cin, command) ){
        
        if (command == "Shift") {
            while (std::getline(std::cin, command))
           
            if (command == "Up"){
                buffer = BufferUp(buffer, *kursor);
                kursor = Up(text, kursor);
                std::cout << "KURSOR: "<< *kursor <<'\n';
                n++;
            } else if (command == "Down"){
                kursor = Down(text, kursor);
                std::cout << *kursor;
                n++;
            } else if (command == "Ctrl+X"){

                break;
            } else if (command == "Ctrl+V"){
                break;
            }

            // for (std::string elem : buffer){
            //     std::cout << "bufer**************\n" << elem << '\n';
            // }
            // std::cout << "bufer********************\n";


        }

    }
    
    for (std::string elem : text){
        std::cout << elem << '\n';
    }
}