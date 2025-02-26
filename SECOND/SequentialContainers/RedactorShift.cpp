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

<<<<<<< HEAD
auto Up(const std::list<std::string>& text, std::list<std::string>::iterator lastkursor){
=======
auto Up(const std::list<std::string>& text, auto lastkursor){
>>>>>>> 32971688c6086b291d17ecf6401bdfcd9831f760
    if (lastkursor != text.begin()){ lastkursor--;}
    return lastkursor;
}

<<<<<<< HEAD
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


=======
auto Down(const std::list<std::string>& text, auto nextkursor){
    if (nextkursor != text.end()){ nextkursor++;}
    return nextkursor;
}
>>>>>>> 32971688c6086b291d17ecf6401bdfcd9831f760



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
    std::deque<std::string> buffer;
    std::string command;
    int n = 1;
    auto kursor = text.begin();
<<<<<<< HEAD
    
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

=======
    while (std::getline(std::cin, command)){

        if (command == "Shift"){
            Buffer(text, kursor);
        }
        if (command == "Up"){
            kursor = Up(text, kursor);
            std::cout << *kursor;
        } else if (command == "Down"){
            kursor = Down(text, kursor);
            std::cout << *kursor;
        } else if (command == "Ctrl+X"){

        
    }
>>>>>>> 32971688c6086b291d17ecf6401bdfcd9831f760
    }
    
    for (std::string elem : text){
        std::cout << elem << '\n';
    }

}