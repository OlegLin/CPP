#include <iostream>
#include <string>
#include <vector>


void Print(int value) {
    std::cout << value << "\n";
}


void Print(const std::string& name, int value) {
    std::cout << name << ": " << value << "\n";  // печатаем название и саму величину
}


void Print(const std::string& str) {
    std::cout << str << "\n";
}


int main() {
    Print(42);  // 1
    Print("x", 42);  // x: 42
    Print("good bye");  // good bye
}


template <typename T>
T Max(const T& x, const T& y){
    if (x > y){
        return x;
    } else {return y;}
}



int main(){
    double x = 3.123123, y = 2.7231;
    std::string s1 = "qwer", s2 = "req";

    std::cout << Max(x, y)<< '\n';
    std::cout << Max<int>(x, y)<< '\n';
    std::cout << Max(s1, s2)<< '\n';

}

#include <iostream>

#include <vector>


// общая версия

template <typename T>

T Max(const T& x, const T& y) {

    if (x > y) {

        return x;

    } else {

        return y;

    }

}


// перегрузка для векторов

// template <typename T>

// const std::vector<T>& Max(const std::vector<T>& v1, const std::vector<T>& v2) {

//     if (v1.size() > v2.size()) {

//         return v1;

//     } else if (v1.size() < v2.size()) {

//         return v2;

//     } else if (v1 > v2) {

//         return v1;

//     } else {

//         return v2;

//     }

// }



// int main() {

//     std::cout << Max(1, 2) << "\n";  // вызов общей версии


//     std::vector<int> v1 = {1, 2, 3};

//     std::vector<int> v2 = {4, 5};

//     for (int x : Max(v1, v2)) {  // вызов перегруженной версии

//         std::cout << x << " ";  // 1 2 3

//     }

//     std::cout << "\n";

// }

// triple template like pair

// template <typename T1, typename T2, typename T3>

// struct Triple {

//     T1 first;

//     T2 second;

//     T3 third;

// };


// int main() {

//     Triple<int, int, int> point = {-1, 3, 2};

//     Triple<std::string, std::string, int> wordPairsFreq = {"hello", "world", 42};

// }