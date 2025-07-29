#include <vector>
#include <iostream>


class Date
{
private:
    int day = 1, month = 1, year = 1970;
    bool flag = month == 2 || month == 4 || month == 6 || month == 9 || month == 11; 
    bool leapyear = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) && year > 1969 && year < 2100;
    void Norm(){
        int numbersDay = 0;
        
        if (month == 2 && leapyear){
            if (day < 1 || day > 29){
                day = 1;
                month = 1;
                year = 1970;
            } 
        } else if (month == 2 && !leapyear){    
            if (day < 1 || day > 28){
                day = 1;
                month = 1;
                year = 1970;
            } 
        } else if (flag){
             if (day < 1 || day > 30){
                day = 1;
                month = 1;
                year = 1970;
            } }
            else {
                if (day < 1 || day > 31){
                day = 1;
                month = 1;
                year = 1970;
            } 
                
            }

        

        
        
        
    }


public:
    Date() = default;
    Date(int d, int m, int y):
    day(d),
    month(m),
    year(y) {
        Norm();

    };

    int TotalDay() {
        int i = month;
        while (i != 0){
            --i;
            day += 30;
            
        }
        return day;
    }

    int GetDay(){
        return day;
    }
    int GetMonth(){
        return month;
    }
    int GetYear(){
        return year;
    }

    // Date operator + (int d) {

    // }
};


int main() {
    Date data1(32, 3, 2000);
    std::cout<< data1.GetDay() << '.' << data1.GetMonth() << '.' << data1.GetYear() << '\n';
    Date data2(3, 3, 2000);
    std::cout<< data2.GetDay() << '.' << data2.GetMonth() << '.' << data2.GetYear() << '\n';
    std::cout << data2.TotalDay() << '\n';
}