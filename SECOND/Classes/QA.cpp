#include <iostream>


// struct Time {
//     int hours = 0;
//     int minute = 0;
//     int seconds = 0;
// };

class Time {
private:
    int hours;
    int minute;
    int seconds;
public:
    Time(int h, int m, int s);

    int GetHours() const;
    int GetMinute() const;
    int GetSeconds() const;

    
};
    Time::Time(int h, int m, int s){
        if (s < 0 || s > 59){
            std::cout << "NO range - seconds";
        }
        if (m < 0 || m > 59){
            std::cout << "No range - minute";
        }
        if (h < 0 || h > 24){
            std::cout << "no range hours";
        }
        minute = m;
        hours = h;
        seconds = s;
    }

    int Time::GetHours() const{
        return hours;
    }
    int Time::GetMinute() const{
        return minute;
    }
    int Time::GetSeconds() const{
        return seconds;
    }


int main() {
    Time t(32, 30, 10);
    std::cout << t.GetHours() << ":" << t.GetMinute() << ":"<< t.GetSeconds() << '\n';
}