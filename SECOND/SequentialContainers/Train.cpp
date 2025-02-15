#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <deque>
#include <list>
#include <array>
#include <algorithm>

void MakeTrain(){
    std::size_t n;
    std::string side;
    std::deque<int> trains;

    while (std::cin >> side){
        std::cin >> n;
        switch (side[0])
        {
        case '+':
            switch (side[1])
            {
            case 'r':
                trains.push_back(n);
                break;
            
            case 'l':
                trains.push_front(n);
                break;
            }
            break;
        
        case '-':
            switch (side[1])
            {
            case 'r':
                while (n != 0 && !empty(trains)){
                    trains.pop_back();
                    n--;
                }
                break;
            
            case 'l':
                while (n != 0 && !empty(trains)){
                    trains.pop_front();
                    n--;
                }          
                break;
            }
            break;
        
        default:
            break;
        }
    }
    for (std::size_t elem : trains){
        std::cout << elem << ' ';
    }
    std::cout << '\n';
}


int main(){
    
    MakeTrain();
    
}