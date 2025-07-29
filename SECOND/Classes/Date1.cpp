#include <iostream>


class Date
{
private:
    int day = 1, month = 1, year = 1970;
    bool shortMonth = month == 2 || month == 4 || month == 6 || month == 9 || month == 11;
    void InDate(){
        int y = 1970;
        int d = day;
        int m = 1;
        bool leapyear = (y % 4 == 0 && y % 100 != 0) || y % 400 == 0;
        while ((day > 365 && !leapyear) || (day > 366 && leapyear) ){
            leapyear = (y % 4 == 0 && y % 100 != 0) || y % 400 == 0;
            if (leapyear){
                day -= 366;
                ++y;
            } else {day -= 365;
            ++y;}
        }
        while ((day >=32 && !shortMonth) || (day >= 31 && shortMonth) || (day >= 30 && m == 2 && leapyear) || (day >= 29 && m == 2 && !leapyear)){
            
            if ( month == 4 || month == 6 || month == 9 || month == 11){
                day -= 30;
                ++m;
            } else if (m == 2 && leapyear){
                day -= 29;
                ++m;
            } else if (m == 2 && !leapyear){day -= 28;
            ++m;}
            else{day -= 31;
            ++m;}
        }
        year = y;
        month = m;
        
        

    }


public:
    Date(int d, int m, int y):
    day(d),
    month(m),
    year(y){

    }

    Date() = default;
    Date(int d):
    day(d){InDate();};

    int TotalDay(){
        
        int y = year;
        int m = month;
        int d = day;
        bool leapyear = (y % 4 == 0 && y % 100 != 0) || y % 400 == 0;
        --m;
        while (m != 0){
            if (m == 2 && leapyear){
                d += 29;
            } else if (m == 2 && !leapyear){
                d += 28;
            } else if (shortMonth) {
                d += 30;
            } else { d += 31; }
            --m;
        }
        
        while (y - 1970 != 0 ){
        leapyear = (y % 4 == 0 && y % 100 != 0) || y % 400 == 0;
            if (leapyear){
                d += 366;
            } else { d += 365;}
            --y;
        }
        return d;
    }


    Date operator + (int d){
    return Date(Date(day, month, year).TotalDay() + d);
}
    Date operator - (int d){
    return Date(Date(day, month, year).TotalDay() - d);
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

};  




int main() {
    Date data1(32, 3, 2000);
    std::cout<< "DATA1: "<<data1.GetDay() << '.' << data1.GetMonth() << '.' << data1.GetYear() << '\n';
    Date data2(1, 1, 1973);
    std::cout<<"DATA2: "<< data2.GetDay() << '.' << data2.GetMonth() << '.' << data2.GetYear() << '\n';
    std::cout << data2.TotalDay()<<'\n';
    Date data3(1095);
    std::cout<<"DATA3: "<< data3.GetDay() << '.' << data3.GetMonth() << '.' << data3.GetYear() << '\n';
    Date data4 = data2 + 2;
    std::cout<< "DATA4: "<<data4.GetDay() << '.' << data4.GetMonth() << '.' << data4.GetYear() << '\n';
    for (int i = 1; i != 367    ; ++i){
        Date data6(i);
    std::cout<<"DATA6: "<< i << "  :  " << data6.GetDay() << '.' << data6.GetMonth() << '.' << data6.GetYear() << '\n';

    }
}
