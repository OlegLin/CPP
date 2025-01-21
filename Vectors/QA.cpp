#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

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

    // int x;
    // std::vector<int> data1 = {1, 2, 0};
    // for (int elem : data1){        // output
    //     std::cout << elem << '\t';// output
    // }                             // output
    // std::cout << '\n';
    // while (std::cin >> x){
    //     data1.push_back(x);
    // }
    // for (int elem : data1){        // output
    //     std::cout << elem << '\t';// output
    // }                             // output
    // std::cout << '\n';
    // while (!data1.empty() && data1.back() != 0){
    //     data1.pop_back();
    // }
    // for (int elem : data1){        // output
    //     std::cout << elem << '\t';// output
    // }                             // output
    // std::cout << '\n';



    ///////reserve memory
        std::vector<std::string> words;

    size_t words_count;
    std::cin >> words_count;

    // memory zero stable, when change only reserve
    // words.reserve(words_count);

    // for (size_t i = 0; i != words_count; ++i) {
    //     std::string word;
    //     std::cin >> word;
    //     // not price, when add word
    //     words.push_back(word);
    // }

    std::vector<std::vector<int>> calend(3, std::vector<int>(3));
   

    for (size_t i=0; i!=3; ++i){
        for (size_t j = 0; j != 3; ++j ){

            std::cin >> calend[i][j];
            

        }
    }

    // sorted include algorithm

    // for (std::vector<int> stroka : calend){       
    //     std::sort(stroka.begin(), stroka.end() );         don't work
    // }
    // for (std::vector<int> stroka : calend){       
    //     std::ranges::sort(stroka);      //   don't work
    // }

    // rbegin rend - reverse.
    std::sort(calend.begin(), calend.end());

    for (std::vector<int> stroki : calend){
        for (int elem : stroki){

            std::cout << elem << '\t';

        }
        std::cout << '\n';

    

    }

    std::string s = "Some string";

    // приписывание символов и строк
    s += ' ';  // добавляем отдельный символ в конец, это аналог push_back
    s += "functions";  // добавляем строку в конец
    std::cout << s << "\n";  // Some string functions

    // выделение подстроки
    // подстрока "string" из 6 символов начиная с 5-й позиции
    std::string sub1 = s.substr(5, 6);
    // подстрока "functions" с 12-й позиции и до конца
    std::string sub2 = s.substr(12);

    // поиск символа или подстроки
    size_t pos1 = s.find(' ');  // позиция первого пробела, в данном случае 4
    size_t pos2 = s.find(' ', pos1 + 1);  // позиция следующего пробела (11)
    size_t pos3 = s.find("str");  // вернётся 5
    size_t pos4 = s.find("#");  // вернётся std::string::npos


        std::string s = "Some string functions";

    // вставка подстроки
    s.insert(5, "std::");
    std::cout << s << "\n";  // Some std::string functions

    // замена указанного диапазона на новую подстроку
    s.replace(0, 4, "Special");
    std::cout << s << "\n";  // Special std::string functions

    // удаление подстроки
    s.erase(8, 5);  // Special string functions


}