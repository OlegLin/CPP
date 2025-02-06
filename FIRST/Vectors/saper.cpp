#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    
    int m; // number of rows
    int n; //number of columns
    int k; // namber of mins
    int x, y; //mins

    std::cin >> m >> n >> k;
    std::vector<std::vector<int>> pole(m+2, std::vector<int>(n+2));

    for (int i = 0; i != k; ++i){        
        std::cin >> x >> y;
        pole[x][y] = -100;        
        for (int rows = x - 1; rows != x + 2; ++rows){
            for (int colum = y - 1; colum != y+2; ++colum){
                
                pole[rows][colum] += 1;
            }
        }
        
    }
    for (int i = 1; i != m + 1; i++){
        for (int j = 1; j != n + 1; ++j){
            if (pole[i][j] < 0){
                    cout << "*" << ' ';
            }
             else{cout << pole[i][j] << ' ' ;}
            
        }
        cout << '\n';
    }

}