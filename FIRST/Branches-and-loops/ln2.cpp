#include <iostream>

int main(){
    float accuracy2, sumP = 0, sumM = 0;
    
    std::cin >> accuracy2;
    float accuracy1 = accuracy2 - 1;
    while (accuracy1 > 0 ){
        sumP += 1/accuracy1;
        --accuracy1;
        --accuracy1;
        
    }
    while (accuracy2 > 0){
        sumM += 1/accuracy2;
        --accuracy2;
        --accuracy2;
    }
    std::cout << std::abs(sumP - sumM) << '\n';
}