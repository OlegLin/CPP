#include <iostream>
#include <iterator>
#include <map>
#include <string>

int main() {
    std::map<int, std::string> numbers = {
        {100, "hundred"},
        {3, "three"},
        {42, "forty two"},
        {11, "eleven"},
    };

    auto iter = numbers.find(11);

    if (iter != numbers.end()) {
        // печатаем найденный элемент
        const auto& [key, value] = *iter;
        std::cout << "Found: " << key << ": " << value << "\n";  // Found: 11: eleven

        // печатаем предыдущий элемент
        if (iter != numbers.begin()) {
            const auto& [key, value] = *std::prev(iter);
            std::cout << "Previous: " << key << ": " << value << "\n";  // Previous: 3: three sorted key 3,11,42,100
        } else {
            std::cout << "No previous element\n";
        }

        // печатаем следующий элемент
        if (auto nextIter = std::next(iter) ; nextIter != numbers.end()) {
            const auto& [key, value] = *nextIter;
            std::cout << "Next: " << key << ": " << value << "\n";  // Next: 42: forty two
        } else {
            std::cout << "No next element\n";
        }
    } else {
        std::cout << "Not found\n";
    }
}