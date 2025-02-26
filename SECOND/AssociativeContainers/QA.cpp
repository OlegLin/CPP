#include <iostream>
#include <map>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>

// void Check(const std::map<std::string, int>& data) {
//     if (data["total"] > 0) {  // ошибка компиляции!
//         // ...
//     }
// }

// void Check(const std::map<std::string, int>& data) {
//     if (data.at("total") > 0) {  // OK, это скомпилируется если есть тотал в дате.
//         // ...
//     }
// }

int main() {
    // инициализируем map набором пар {ключ, значение}
    std::map<std::string, int> years = {
        {"Moscow", 1147},
        {"Rome", -753},
        {"London", 47},
    };

    for (const auto& [city, year] : years) {
        std::cout << city << ": " << year << "\n";
    }


    // std::map<std::string, int> data;
    // std::string key;
    // int value;

    // while (std::cin >> key >> value) {
    //     data[key] = value;  // вставка
    //     data.insert({key, value}) ;// не перезапишет
    //     data.insert_or_assign(key, value); // перезапишет
    // }

    // data.erase("hello");  // удаление по отсутствующему ключу не вызовет ошибки.

    // // поиск
    // if (auto iter = data.find("test2"); iter != data.end()) {
    //     std::cout << "Found the key " << (*iter).first << " with the value " << iter->second << "\n";
    // } else {
    //     std::cout << "Not found\n";
    // }

    // for (const auto& [key, value] : data){
    //     std::cout<< key << "   : " << value<< '\n';
    // }


// $ clang++ --std=c++20 -O3 -o count_freqs count_freqs.cpp
// $ time ./count_freqs < text8 > /dev/null
// real    0m5,541s
// user    0m5,500s
// sys     0m0,040s

// real    0m14,127s
// user    0m13,797s
// sys     0m0,273s


    // std::map<std::string, int> words;
    // std::string word;
    // while (std::cin >> word){
    //     ++words[word];
    // }

    // for (const auto& [key, value] : words){
    //     std::cout << key << " :   "  << value <<'\n';
    // }
    



// real    0m5,726s
// user    0m5,398s
// sys     0m0,280s
// Порядок обхода теперь выглядит произвольным (но на самом деле он диктуется хеш-функцией):
    //неупорядоченный bucket 0, 1, 2, 3, 4 in bucket 0 - vector (1, 2, 3), bucket 1 - vector 4, 5
    std::unordered_map<std::string, int> words1;
    std::string word;

    words1.reserve(300);

    while (std::cin >> word){
        ++words1[word];
    }




    for (const auto& [key, value] : words1){
        std::cout << key << " :   "  << value <<'\n';
    }



   

}


