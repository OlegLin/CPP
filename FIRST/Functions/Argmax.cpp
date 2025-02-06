#include <iostream>
#include <vector>
#include <utility>

using std::cout, std::cin;


// std::pair<size_t, size_t> MatrixArgMax(const std::vector<std::vector<int>>& matrix){
//     size_t maxelem = 0;
//     std::pair<size_t, size_t> answer = {0, 0};
//     for (size_t i = 0; i != matrix.size(); ++i){
//         for (size_t j =0; j != matrix[0].size(); ++j){
            
//             if (matrix[i][j] > maxelem){
//                 // cout << i << j;
//                 answer = {i, j};
//                 maxelem = matrix[i][j];
//             }
//         }
//     }

//     return answer;
    
// }



std::pair<std::size_t, std::size_t> MatrixArgMax(const std::vector<std::vector<int>>& matrix){
    std::size_t maxelem = 0;
    std::pair<size_t, size_t> answer = {0, 0};
    for (std::size_t i = 0; i != matrix.size(); ++i){
        for (std::size_t j =0; j != matrix[0].size(); ++j){
            
            if (matrix[i][j] > maxelem){
                answer = {i, j};
                maxelem = matrix[i][j];
            }
        }
    }

    return answer;
    
}



int main(){
    int n, m;
    cin >> n >> m;
    std::vector<std::vector<int>> matrix(n, std::vector<int>(m));

    for (int i = 0; i != n; ++i){
        for (int j = 0; j != m; ++j){

            int x;
            cin >> x;
            matrix[i][j] = x;

        }
    }
   
    for (std::vector row : matrix){
        for (int elem : row){
            cout << elem << '\t';
        }
        cout << '\n';
    }

    std::pair<size_t, size_t> answer = MatrixArgMax(matrix);
    cout << answer.first << '\t' << answer.second<<'\n';


}