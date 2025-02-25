#include <iostream>
#include <list>
#include <string>

using namespace std;

int main(){
    list<string> solver = {"one", "two", "three", "four", "five"};
    int n =0;
    auto iter = solver.begin();
    string buffer, buf = "gogi\nsdfg";
    iter++;
    buffer = *iter;
    iter = solver.erase(iter);
    cout << buffer << '\n';
    // don't work iter = iter + 2;
    iter++;
    iter++;
    solver.insert(iter, buffer);
    solver.insert(iter, buf);
    for (string elem : solver){
        n++;

        cout <<n << ":  "<<elem << '\n';
    }


}