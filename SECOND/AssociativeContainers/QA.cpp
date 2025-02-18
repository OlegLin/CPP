#include <iostream>
#include <map>
#include <string>

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


    std::map<std::string, int> data;
    std::string key;
    int value;

    while (std::cin >> key >> value) {
        data[key] = value;  // вставка
    }

    data.erase("hello");  // удаление

    // поиск
    if (auto iter = data.find("test"); iter != data.end()) {
        std::cout << "Found the key " << iter->first << " with the value " << iter->second << "\n";
    } else {
        std::cout << "Not found\n";
    }
}


