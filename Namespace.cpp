#include <iostream>
#include <vector>

using std::cout;
using std::cin;
typedef std::vector<std::vector<int>> matrix;


int main(){
    matrix example = {{11,2,3},{1,2,3},{123,123,123}};

    for (std::vector<int> str : example){
        for (int x : str){
            cout << x << '\t';
        }
        cout << '\n';
    }
    cout << "helloworld" << '\n';
}
