#include <iostream>

int main(){
    int days, mounth, year;
    bool leapyear;
    std::cin >> mounth >> year;
    leapyear = (year % 100 != 0 && year % 4 == 0) || year % 400 == 0;
    if(  (mounth % 2 == 1 && mounth <= 7) || (mounth % 2 == 0 && mounth > 7)){
            days = 31;
        } else {
            days = 30;
        }
    
    if (leapyear && mounth == 2){days = 29;} 
    else if (!leapyear && mounth == 2) { days = 28;}

    
    std::cout << days << '\n';
    
}