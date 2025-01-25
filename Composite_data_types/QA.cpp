#include <iostream>


using std::cout;

enum class Color{
    White,
    Black,
    Red,
    Orange,
};

struct Point {
    double x = 0.0;
    double y = 0.0;
    double z = 0.0;
    Color color;
};

int main(){
    Point point1;  // по умолчанию координаты будут нулевыми, а color никак не будет проинициализирован
    point1.color = Color::Red;

    Point point2 = {1.4, -2.2, -3.98, Color::Orange};

    point2.z -= 10;

    cout << point2.z << '\n';



}