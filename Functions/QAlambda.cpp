#include <iostream>
#include <vector>
#include <algorithm>


using std::cout, std::cin;


struct Date{
    int year, month, day;
};

int main(){
    std::vector<Date> dates = {
        {2025, 12, 23},
        {2025, 12, 20},
        {2020, 10, 12},
        {2020, 9, 12},
        {2023, 7, 15}
    };

    for (const auto& date : dates){
        cout << date.day <<'/' << date.month << '/' << date.year << '\n';
    }
    cout << "*************************\n";
    std::sort(dates.begin(), dates.end(), [](const Date& lhs, const Date& rhs){
        return std::tie(lhs.year, lhs.month, lhs.day) < std::tie(lhs.year, lhs.month, lhs.day);});

    for (const auto& date : dates){
        cout << date.day <<'/' << date.month << '/' << date.year << '\n';
    }
}