#include <iostream>
#include <list>
#include <string>
#include <vector>


using std::cout;

std::list<std::string> Text(){
    std::list<std::string> out;
    std::string added;
    while (std::getline(std::cin, added) && added != ""){
            out.push_back(added);
    }
    return out;
}





int main(){
    std::list<std::string> text = Text();
    std::string command;
    std::list<std::string> buffer;
    auto kursor = text.begin();
    bool flag = false;

    while (std::getline(std::cin, command)){
        if (command == "Shift"){
            flag = true;
        }
        if (command == "Up" && kursor == text.begin()){
            if (flag){
                cout << "UPUPPUPUPUPUPUPUP" << '\n';
                buffer.push_back(*kursor);
                kursor = text.erase(kursor);
            } else {
            kursor--;
            }
        if (command == "Down"){
            if (flag){
                cout << "UPUPPUPUPUPUPUPUP";
                buffer.push_back(*kursor);
                kursor = text.erase(kursor);
            } 
            kursor++;
            cout << "UPUPPUPUPUPUPUPUP";
        } else if (command == "Ctrl+X"){
            flag == false;
        } else if (command == "Ctrl+V"){
            flag == false;
        }
    }
    cout << command << flag << '\n';
    for (auto elem : buffer){
        cout <<elem << '\n';
    }
    
    }


     for (auto elem : text){
            cout << elem << '\n';
        }
}