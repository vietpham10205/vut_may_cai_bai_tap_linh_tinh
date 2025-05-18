#include <iostream>
using namespace std;

class Fraction
{
    
    
    public:
    int numerator, denominator;
    Fraction (int ts=0, int ms=1)
    {
        numerator = ts;
        denominator = ms;
    }
    Fraction operator+(Fraction const& fr2)
    {
        Fraction temp;
        temp.numerator = (this->numerator * fr2.denominator) + (fr2.numerator * this->denominator);       //these 2 lines of code still work without
        temp.denominator = this->denominator * fr2.denominator; //"this->"pointer

        return temp;                                           //return all the value pointed by Tem
    }
    
    
  
};

 
    
    int main()
    {
        Fraction a, b(3, 4), c(2, 5);
        a = b + c;
        Fraction d=c;
        
        cout << a.numerator<< "/" << a.denominator<<endl;
        cout << d.numerator<< "/" << d.denominator;
    }