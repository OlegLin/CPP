#include <vector>
#include <iostream>
#include <array>

using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> solution;
        int answer;
        
        for (int i = 0; i != nums.size(); ++i){
            for (int j = i + 1; j != nums.size(); ++j){
                    if (j + i == target){
                        solution = {i, j};
                        break;
                    }
            }

        }
        return solution;
        
    }
};


int main(){
    vector nums  {2, 7, 11, 15} ;
    int target = 9;

    Solution.twoSum(nums, 9);

    for (int elem : nums){
        cout << elem << '\n';
    }
}