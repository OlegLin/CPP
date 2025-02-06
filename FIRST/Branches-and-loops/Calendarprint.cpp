#include <iostream>
using namespace std;
int main() {
    int weekday, days, count = 1;
    
    cin >> weekday >> days;
    for (int i = 0; i < weekday - 1; ++i){
        cout << "   " ;
        count++;
    }
    for (int j = 1; j <= days; ++j){
        if (j < 10){
            cout <<" "<< j << " ";
        }
        else {
        cout << j << " ";
        }
        if (count % 7 == 0){
            cout << "\n";
        }
        count++;
    }
    cout << "\n";
    
}