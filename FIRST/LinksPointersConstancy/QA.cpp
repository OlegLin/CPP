#include <string>
#include <iostream>
#include<vector>


using std::cout;

struct  Point
{   // double x,y,z;
    double x = 3.12;
    double y = 12.22;
    double z = 4.65;
};



int main(){

//**************************links************** */
    int a = 7;
    int& b = a;
    std::string word = "HIIII";
    std::string& newWeord = word; // initialization in born
    newWeord = "asdfas";
    word = "GOGO";
    cout << b<<'\t'<< newWeord << '\n';
//*****************POINTERs************* */

    // int x = 1, y = 2, z = 3;
    // cout << &x << "\n";
    // cout << &y << "\n";
    // cout << &z << "\n";

    // int x = 42, y = 13;
    // int* ptr;  // по умолчанию не инициализируется, тут лежит «случайный» адрес
    // ptr = nullptr;  // «нулевой» указатель
    // ptr = &x;  // теперь в ptr лежит адрес переменной x
    // std::cout << *ptr << "\n";  // 42
    // ptr = &y;  // можно поменять адрес, записанный в ptr
    // std::cout << *ptr << "\n";  // 13


    Point p = {3.0, 4.0, 5.0};

    Point* ptr1 = &p;

    std::cout << (*ptr1).x << "\n";  // обращение через * и . требует скобок
    std::cout << ptr1 -> x << "\n";  // то же самое, но чуть короче


//*****************CONSTANT *************** */

    const int c1 = 42;  // эта константа известна в compile time

    int x;
    std::cin >> x;
    const int c2 = 2 * x;  // значение становится известным только в runtime

  //  с2 = 0;  // ошибка компиляции: константе нельзя присвоить новое значение

    const std::vector<int> v = {1, 3, 5};
    std::cout << v.size() << "\n";  // OK, напечатает 3
    //v.clear();  // ошибка компиляции: константный вектор нельзя изменять
   // v[0] = 0;  // тоже ошибка компиляции


}