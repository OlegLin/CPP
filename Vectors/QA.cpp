#include <iostream>
#include <vector>
#include <string>

int main(){
    std::vector<int> data = {1, 2, 3, 4};
    std::string phrase = "I love my douther";

    std::cout << !empty(data) << '\n'; // check 

    for (int elem : data){
        std::cout << elem << '\t' ;
    } // everyone element in data
    std::cout << '\n';

    for (char sym : phrase){
        std::cout << sym;
    } //everyone symbol in string
    std::cout << '\n';


    // view last element
    std::cout << data.at(data.size()-1) << data.front() << data.back() << '\n';

    //add and delete last element  ctrl+D end input!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

    int x;
    std::vector<int> data1 = {1, 2, 0};
    for (int elem : data1){        // output
        std::cout << elem << '\t';// output
    }                             // output
    std::cout << '\n';
    while (std::cin >> x){
        data1.push_back(x);
    }
    for (int elem : data1){        // output
        std::cout << elem << '\t';// output
    }                             // output
    std::cout << '\n';
    while (!data1.empty() && data1.back() != 0){
        data1.pop_back();
    }
    for (int elem : data1){        // output
        std::cout << elem << '\t';// output
    }                             // output
    std::cout << '\n';



    ///////reserve memory
        std::vector<std::string> words;

    size_t words_count;
    std::cin >> words_count;

    // memory zero stable, when change only reserve
    words.reserve(words_count);

    for (size_t i = 0; i != words_count; ++i) {
        std::string word;
        std::cin >> word;
        // not price, when add word
        words.push_back(word);
    }




}