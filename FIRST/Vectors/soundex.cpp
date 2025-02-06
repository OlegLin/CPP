#include <iostream>
#include <string>

int main(){
    std::string sound, answer;
    std::cin >> sound;
    if (sound.size() == 0){
        answer  += '0';
    } else{
        answer += sound[0];

    if (sound.size() > 1){
    for (size_t i = 1; i != sound.size() ; ++i){
//         b, f, p, v: 1
// c, g, j, k, q, s, x, z: 2
// d, t: 3
// l: 4
// m, n: 5
// r: 6
        
        if ((sound[i] == 'b' || sound[i] == 'f' || sound[i] == 'p' || sound[i] == 'v') && answer[answer.size() - 1] != '1'){
            answer += '1';
        } else if ((sound[i] == 'c' ||sound[i] == 'g' || sound[i] == 'j' || sound[i] == 'k' || sound[i] == 'q' || sound[i] == 's' || sound[i] == 'x' ||sound[i] == 'z') && answer[answer.size() - 1] != '2'){
            answer += '2';
        } else if ((sound[i] == 'd' ||sound[i] == 't') && answer[answer.size() - 1] != '3' ){
            answer += '3';
        } else if (sound[i] == 'l' && answer[answer.size() - 1] != '4'){
            answer += '4';
        } else if ((sound[i] == 'm' ||sound[i] == 'n') && answer[answer.size() - 1] != '5'  ){
            answer += '5';
        } else if (sound[i] == 'r'  && answer[answer.size() - 1] != '6'){
            answer += '6';
        } 
    }
    } else { answer = sound[0];} }
    while (answer.size() > 4){
        answer.pop_back();
    }
    while (answer.size() < 4){
        answer += '0';
    }
    
    std::cout << answer << '\n';
}