#include <iostream>

int main(){
  int a1, b1, a2, b2;
  std::cin >> a1 >> b1 >> a2 >> b2;
  if (a1 == a2 || b1 == b2 || (abs(a1 - a2) == abs(b1 -b2))){
    std::cout << "YES" << '\n';
  } else {
    std::cout<<"NO" <<'\n';
  }
}