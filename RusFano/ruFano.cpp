#include <iostream>
#include <list>
#include <map>
#include <fstream>


std::string noSplit(){
    
    std::string all_elem;
    std::string new_string;
    while (std::cin >> new_string)
    {
        all_elem += new_string;
    }
    return all_elem;
    
}


int main(){
    setlocale(LC_ALL, "ru");

    std::string text = noSplit(), shifr;
    


    setlocale(LC_CTYPE, "rus");
    std::map<char, std::string>  codesym = {
        {'а', "--*"},
        {'и', "---"},
        {'о', "*-*"},
        {'е', "*--"},
        {'т', "-*--"},
        {'с', "-*-*"},
        {'н', "**-*"},
        {'р', "****"},
        {'в', "***-*"},
        {'л', "**--*"},
        {'к', "-***-"},
        {'м', "-**-*"},
        {'у', "**----"},
        {'я', "-*****"},
        {'п', "-**--*"},
        {'д', "-**---"},
        {'г', "***---*"},
        {'ы', "***----"},
        {'ь', "**---*-"},
        {'з', "-****--"},
        {'х', "***--*--"},
        {'б', "***--***"},
        {'ч', "**---**-"},
        {'й', "**---***"},
        {'ж', "***--*-*-"},
        {'ш', "***--*-**"},
        {'ю', "***--**--"},
        {'ц', "***--**-*"},
        {'щ', "-****-*--"},
        {'э', "-****-*-*"},
        {'ф', "-****-***"},
        {'ъ', "-****-**-"},
        {'А', "--*"},
        {'И', "---"},
        {'О', "*-*"},
        {'Е', "*--"},
        {'Т', "-*--"},
        {'С', "-*-*"},
        {'Н', "**-*"},
        {'Р', "****"},
        {'В', "***-*"},
        {'Л', "**--*"},
        {'К', "-***-"},
        {'М', "-**-*"},
        {'У', "**----"},
        {'Я', "-*****"},
        {'П', "-**--*"},
        {'Д', "-**---"},
        {'Г', "***---*"},
        {'Ы', "***----"},
        {'Ь', "**---*-"},
        {'З', "-****--"},
        {'Х', "***--*--"},
        {'Б', "***--***"},
        {'Ч', "**---**-"},
        {'Й', "**---***"},
        {'Ж', "***--*-*-"},
        {'Ш', "***--*-**"},
        {'Ю', "***--**--"},
        {'Ц', "***--**-*"},
        {'Щ', "-****-*--"},
        {'Э', "-****-*-*"},
        {'Ф', "-****-***"},
        {'Ъ', "-****-**-"},
        
    };


    std::string symb;

    
    std::cout << symb;

    std::ofstream out1; //release
    out1.open("Shifr.txt");
    
    

    if (out1.is_open()){
        for (auto [key, value] : codesym){
            
            out1 << key  << '\t' << value << '\n';
        }
    }
    out1.close();

    for (char q : text){
        shifr += codesym[q];
    }

        
    


    std::ofstream out2; // + new
  
    out2.open("translate.txt", std::ios::app);   

    
    if (out2.is_open()) {
        out2 << "$$$*******************************$$$" << '\n';
        out2 << text << '\n' <<shifr << '\n';
    }
    out2.close();

    std::cout << "File has been written" << std::endl;




}