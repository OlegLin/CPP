#include <iostream>
#include <utility>
#include <tuple>
#include <string>


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



    std::pair<double, int> neww = {3.14, 5};
    cout << neww.first << '\t';
    cout << neww.second << '\n';

    std::tuple<int, std::string, double, Point> tup = {1, "HI", 5.234, {.x = 3.12}};
    cout << std::get<2>(tup) << '\t' ;
    cout << std::get<1>(tup) << '\t' ;
    cout << std::get<0>(tup) << '\t' ;
    cout << std::get<3>(tup).x << '\n' ;
    std::get<3>(tup).x = 23.232232323;
    cout << std::get<3>(tup).x << '\n' ;






    std::pair<std::string, int> p = {"hello", 42};
    auto [word, freq] = p;  // word = "hello"; freq = 42;

    cout << word << '\n';

//Здесь конструкция auto [word, freq] = p вводит две новые переменные word и freq соответствующих типов и присваивает им значения из пары.



}
