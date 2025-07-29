#include <iostream>


class Time
{
private:
    int seconds =0, minute = 0, hours = 0;
    void Norm(){
        minute += seconds /60;
        seconds %= 60;

        hours += minute /60;
        minute %= 60;

        hours %= 24;
    }
public:
    Time(int h, int m, int s){
        hours = h;
        minute = m;
        seconds = s;
        Norm();
    };
    Time(int s): Time(0, 0, s){

    };
    Time() = default;
    

    int GetHours(){
        return hours;
    }
    int GetMinute(){
        return minute;
    }
    int GetSeconds(){
        return seconds;
    }

    Time& operator += (int s){
        seconds += s;
        Norm();
        return *this;
    }
    Time operator + (int s) {
        return Time(hours, minute, seconds + s);
    }

    int TotalSeconds() const{
        return hours * 3600 + minute * 60 + seconds;
    }


};
    int operator - (const Time& t1, const Time& t2) {
        return t1.TotalSeconds() - t2.TotalSeconds();
    }


int main(){
    Time t(1,23,5);
    std::cout<< t.GetHours() << ':' << t.GetMinute() << ':' << t.GetSeconds() << '\n';
    Time t1(72650);
    std::cout<< t1.GetHours() << ':' << t1.GetMinute() << ':' << t1.GetSeconds() << '\n';
    Time t2;
    std::cout<< t2.GetHours() << ':' << t2.GetMinute() << ':' << t2.GetSeconds() << '\n';
    t2 += 10;
    std::cout<< t2.GetHours() << ':' << t2.GetMinute() << ':' << t2.GetSeconds() << '\n';
    Time t3 = t2 + 120;
    std::cout<< t3.GetHours() << ':' << t3.GetMinute() << ':' << t3.GetSeconds() << '\n';
    std::cout << t1.TotalSeconds() << '\n';

    std::cout<< "NOt sub time: 7-5=" << 7-5<<'\n';
    t3 = Time(t1-t2);
    std::cout<< t3.GetHours() << ':' << t3.GetMinute() << ':' << t3.GetSeconds() << '\n';
    std::cout<< "SUB:  " <<  t1-t2 << '\n';
}