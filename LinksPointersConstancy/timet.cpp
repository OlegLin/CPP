#include <iostream>
#include <vector>
#include <string>


using std::cout;
typedef std::vector<std::string> vec_t;

int main(){
    const size_t m = 1000000;
    const size_t n = 10000;
    vec_t v(m);
    for (auto& row : v){
        row.resize(n, '@');
    }

    size_t sum =0;
    for (const auto& row : v){
        sum += row.size();
    }

    cout << sum << '\n';

}