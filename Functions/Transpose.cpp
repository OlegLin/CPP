#include <iostream>
#include <vector>
#include <string>
std::vector<std::vector<int>> Transpose(const std::vector<std::vector<int>>& matrix){
    int n = matrix.size(), m = matrix[0].size();
    std::vector<std::vector<int>> trmatrix(m, std::vector<int>(n));
    for (std::size_t i = 0; i != m; ++i){
        for (std::size_t j = 0; j!= n; ++j){
            trmatrix[i][j] = matrix[j][i];
        }

    }



    return trmatrix;

}


int main(){
    int n, m;
    std::cin >> m >>n;
    std::vector<std::vector<int>> table(m, std::vector<int>(n));

    for (std::size_t i = 0; i != m; ++i){
        for (std::size_t j = 0; j!= n; ++j){
            std::cin >> table[i][j];
        }
    }

    for (std::size_t i = 0; i != m; ++i){
        for (std::size_t j = 0; j!= n; ++j){
            std::cout << table[i][j] << '\t';
        }
        std::cout << '\n';
    }


    Transpose(table);
}