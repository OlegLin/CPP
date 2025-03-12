#include <algorithm>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <vector>

int main() {
    std::string s = "iPhone SE";

    std::cout << std::count_if(
        s.begin(),
        s.end(),
        [](char c) {
            return 'A' <= c && c <= 'Z';
        }
    ) << "\n";  // 3

    std::string st = "No lemon, no melon!";
    std::reverse(st.begin(), st.end());
    std::cout << st << "\n";  // !nolem on ,nomel oN


    std::map<int, int> m = {
        {1, 30},
        {2, 28},
        {3, 31},
        // ...
    };

    auto it1 = m.find(12);   // правильный способ поиска по ключу
    //auto it2 = std::find(m.begin(), m.end(), 12);  // не скомпилируется!

    std::pair<const int, int> value = {12, 31};
    // Скомпилируется, но неэффективно и бессмысленно:
    auto it3 = std::find(m.begin(), m.end(), value);
    std::set<int> numbers = {2, 3, 5, 7, 11, 13, 17, 19};

    // Предпочтительный способ:
    auto iter1 = numbers.find(15);

    // Допустимо, но неэффективно!
    auto iter2 = std::find(numbers.begin(), numbers.end(), 15);

        std::vector<int> v = {5, 5, 3, 2, 2, 5, 9, 1};
    auto iter = std::unique(v.begin(), v.end());
    // В векторе окажется 5, 3, 2, 5, 9, 1, 9, 1
    //                                      ^ iter будет указывать сюда
    v.erase(iter, v.end());  // удаляем хвост из ненужных элементов

    //     std::vector<int> v = {3, 14, 15, 92, 6};
    // std::list<int> l;
    // l.resize(v.size());  // теперь в списке l 5 нулей

    // std::copy(v.rbegin(), v.rend(), l.begin());

    // for (int x : l) {
    //     std::cout << x << " ";
    // }
    // std::cout << "\n";  // 6 92 15 14 3


    //     std::vector<int> v = {3, 14, 15, 92, 6};
    // std::list<int> l(10);  // 10 нулей

    // auto iter = std::copy(v.begin(), v.end(), l.begin());
    // // 3 14 15 92 6 0 0 0 0 0, iter указывает на первый ноль

    // l.erase(iter, l.end());  // 3 14 15 92 6
}