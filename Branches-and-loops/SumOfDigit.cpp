#include <iostream>

int main(){
    int num, sumDigit = 0;
    std::cin >> num;
    while (num != 0){
        sumDigit += num % 10;
        num /= 10;

    }
    std::cout << sumDigit << '\n';
}