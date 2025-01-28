#include <iostream>
#include <vector>
#include <string>


int Sum(int a, int b){
    return a + b;
}

//NO return
void DoSomething(double a, char c){
    std::cout << "Doing someTHING\n";
}

// FACTORIAL

int Factorial(int n){

    if (n == 0){
        return 1;
    }
    return Factorial(n - 1) * n;
}

// SWAP in main function, but no do is only read var
void Swap(int& x, int& y){

    int z = x;
    x = y;
    y = z;
}

// VECTORS
void f(const std::vector<int>& v){
    int sum =0;
    for (const int& elem : v){
        sum += elem;
    }
    std:: cout << sum << '\n';
}


//conc
std::string Concatenate(const std::vector<std::string>& newword){
    std::string concate;
    for (const auto& word : newword){

        concate += word;

    }
    return concate;
}



int main(){
    int c = 2, d=7;
    int n;
    
    int z = Sum(c, d);
    std::cout << z << '\n';
    DoSomething(3.14, 'g');

    std::cin >> n;
    std::cout << Factorial(n)<< '\n';

    std::cout << c << '\t' << d <<'\n';
    Swap(c, d);
    std::cout << c << '\t' << d <<'\n';


    std::vector<int> prosum = {1, 2, 3, 3, 4};
    f(prosum);


    std::vector<std::string> phrase = {"gogi", "not", "love", "dog"};
    std::cout << Concatenate(phrase) << '\n';
}