#include <iostream>
#include <numeric>



class Rational{
private:
    int ch = 0, zn = 1;
    void Usual(){
        int nod = std::gcd( ch, zn);
        ch /= nod;
        zn /= nod;
    }

public:
    Rational() = default;
    Rational(int c, int z):
    ch(c),
    zn(z){ Usual();

    }


    

    int Numerator() const{
        return ch;
    }
    int Denominator() const{
        return zn;
    }

};

Rational operator * (const Rational& r1, const Rational& r2){
        
        return Rational(r1.Numerator() * r2.Numerator(), r1.Denominator() * r2.Denominator());
    }
Rational operator / (const Rational& r1, const Rational& r2){
        
        return Rational(r1.Numerator() * r2.Denominator(), r1.Denominator() * r2.Numerator());
    }

Rational operator + (const Rational& r1, const Rational& r2){
        
        return Rational(r1.Numerator() * r2.Denominator() + r1.Denominator() * r2.Numerator(), r1.Denominator() * r2.Denominator());
    }

Rational operator - (const Rational& r1, const Rational& r2){
        
        return Rational(r1.Numerator() * r2.Denominator() - r1.Denominator() * r2.Numerator(), r1.Denominator() * r2.Denominator());
    }

Rational operator * (const Rational& r1, int a){
        
        return Rational(r1.Numerator() * a, r1.Denominator());
    }
Rational operator / (const Rational& r1, int a){
        
        return Rational(r1.Numerator() , r1.Denominator() * a);
    }
Rational operator / (int a, const Rational& r1){
        
        return Rational(r1.Denominator() , r1.Numerator() * a);
    }

Rational operator + (const Rational& r1, int a){
        
        return Rational(r1.Numerator()  + r1.Denominator() * a, r1.Denominator() );
    }

Rational operator - (const Rational& r1, int a){
        
        return Rational(r1.Numerator()  - r1.Denominator() * a, r1.Denominator() );
    }

int main(){
    Rational r1(8,4);
    std::cout << "R1: " << r1.Numerator() << "/" << r1.Denominator() << '\n';
    Rational r2(3, 5);
    std::cout << "R2: " <<r2.Numerator() << "/" << r2.Denominator() << '\n';
    Rational r3 = r1 * r2;
    std::cout <<"R3:* " << r3.Numerator() << "/" << r3.Denominator() << '\n';
    Rational r4 = r1 / r2;
    std::cout <<"R4:/ " << r4.Numerator() << "/" << r4.Denominator() << '\n';
    r4 = r1 + r2;
    std::cout <<"R4:+ " << r4.Numerator() << "/" << r4.Denominator() << '\n';
    r4 = r1 - r2;
    std::cout <<"R4:- " << r4.Numerator() << "/" << r4.Denominator() << '\n';
    r4 = r1 - 4;
    std::cout <<"R4:- " << r4.Numerator() << "/" << r4.Denominator() << '\n';
    r4 = r1 + 4;
    std::cout <<"R4+ " << r4.Numerator() << "/" << r4.Denominator() << '\n';
    r4 = r1 * 4;
    std::cout <<"R4* " << r4.Numerator() << "/" << r4.Denominator() << '\n';
    r4 = r1 / 4;
    std::cout <<"R4/ " << r4.Numerator() << "/" << r4.Denominator() << '\n';
    r4 = 4/r2;
    std::cout <<"R4/ " << r4.Numerator() << "/" << r4.Denominator() << '\n';

}