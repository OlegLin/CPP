#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::cout, std::cin;

struct Date{
    int year, month, day;
};

// bool operator < (const Date& lhs, const Date& rhs) {
//     if (lhs.year != rhs.year){
//         return lhs.year < rhs.year;
//     }
//     if (lhs.mounth != rhs.mounth){
//         return lhs.mounth < rhs.mounth;
//     }

//     return lhs.day < rhs.day;
// }

//Sorted by year , mounth, day
bool operator < (const Date& lhs, const Date& rhs){
    return std::tie(lhs.year, lhs.month, lhs.day) < std::tie(rhs.year, rhs.month, rhs.day);
}


// Sorted  ON DAY
bool CompareWithoutYearMounth(const Date& lhs, const Date& rhs){
    return lhs.day < rhs.day;
}

int main(){
    std::vector<Date> dates = {
        {2025, 12, 23},
        {2024, 12, 25},
        {2024, 12, 24},
        {2025, 7, 23}
    };

    for (const auto& date : dates){
        cout << date.day <<'/' << date.month << '/' << date.year << '\n';
    }
cout << "******************************\n";
    std::sort(dates.begin(), dates.end());
    for (const auto& date : dates){
        cout << date.day <<'/' << date.month << '/' << date.year << '\n';
    }
    cout << "*********************\n";
    std::sort(dates.begin(), dates.end(), CompareWithoutYearMounth);
    for (const auto& date : dates){
        cout << date.day <<'/' << date.month << '/' << date.year << '\n';
    }

}