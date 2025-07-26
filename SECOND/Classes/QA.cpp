#include <iostream>
#include <string>


// struct Time {
//     int hours = 0;
//     int minute = 0;
//     int seconds = 0;
// };

class Time {
private:
    int hours = 0;
    int minute = 0;
    int seconds = 0;
    std::string halfday = "AM";

public:
    Time(int h, int m, int s);
    Time() = default;
    Time (int s) : Time(0, 0, s){

    };
    int GetHours() const{
        return hours;
    };
    int GetMinute() const;
    int GetSeconds() const;
    std::string GetHalfday() const;
    
    void AddSec(int s){
        seconds += s;
        std::string hd = "AM";
        minute += seconds / 60;
        seconds %= 60;

        hours += minute / 60;
        minute %= 60;

        hours %= 24;

        if (hours > 12){
            hd = "PM";
        }
        hours %= 12;

        
        halfday = hd;
    }

    
};
Time::Time(int h, int m, int s){
        std::string hd = "AM";
        m += s / 60;
        s %= 60;

        h += m / 60;
        m %= 60;

        h %= 24;

        if (h > 12){
            hd = "PM";
        }
        h %= 12;

        minute = m;
        hours = h;
        seconds = s;
        halfday = hd;
        
    }

// int Time::GetHours() const{
//         return hours;
//     }
int Time::GetMinute() const{
        return minute;
    }
int Time::GetSeconds() const{
        return seconds;
    }
std::string Time::GetHalfday() const{
        return halfday;
    }



int main() {
    Time t(15, 30, 10);
    Time t1(72500);
    std::cout << t.GetHours() << ":" << t.GetMinute() << ":"<< t.GetSeconds() << "-" << t.GetHalfday() <<'\n';
    std::cout << t1.GetHours() << ':' << t1.GetMinute() << ':' << t1.GetSeconds() <<'-' << t1.GetHalfday() << '\n';
    t1.AddSec(120);
    std::cout << t1.GetHours() << ':' << t1.GetMinute() << ':' << t1.GetSeconds() <<'-' << t1.GetHalfday() << '\n';

}