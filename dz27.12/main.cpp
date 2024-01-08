#include <iostream>
#include <iomanip>
#include <windows.h>

using namespace std;

class Fraction {
private:
    int numerator;   
    int denominator; 

public:
   
    Fraction() : numerator(0), denominator(1) {}

    
    Fraction(int num, int denom) : numerator(num), denominator(denom) {}


    void input() {
        cout << "Введіть чисельник: ";
        cin >> numerator;

        do {
            cout << "Введіть знаменник (не може бути 0): ";
            cin >> denominator;
        } while (denominator == 0);
    }

   
    void display() const {
        cout << numerator << '/' << denominator;
    }

   
    Fraction add(const Fraction& other) const {
        int resultNumerator = numerator * other.denominator + other.numerator * denominator;
        int resultDenominator = denominator * other.denominator;
        return Fraction(resultNumerator, resultDenominator);
    }

    Fraction subtract(const Fraction& other) const {
        int resultNumerator = numerator * other.denominator - other.numerator * denominator;
        int resultDenominator = denominator * other.denominator;
        return Fraction(resultNumerator, resultDenominator);
    }

    Fraction multiply(const Fraction& other) const {
        int resultNumerator = numerator * other.numerator;
        int resultDenominator = denominator * other.denominator;
        return Fraction(resultNumerator, resultDenominator);
    }

    Fraction divide(const Fraction& other) const {
        int resultNumerator = numerator * other.denominator;
        int resultDenominator = denominator * other.numerator;

        if (resultDenominator == 0) {
            cerr << "Помилка: ділення на нуль!" << endl;
            
        }

        return Fraction(resultNumerator, resultDenominator);
    }
};

int main() {
    Fraction fraction1, fraction2, result;

    cout << "Введення першого дробу:" << endl;
    fraction1.input();

    cout << "\nВведення другого дробу:" << endl;
    fraction2.input();

   
    result = fraction1.add(fraction2);
    cout << "\nСума: ";
    result.display();

   
    result = fraction1.subtract(fraction2);
    cout << "\nРізниця: ";
    result.display();

   
    result = fraction1.multiply(fraction2);
    cout << "\nДобуток: ";
    result.display();

  
    result = fraction1.divide(fraction2);
    cout << "\nЧастка: ";
    result.display();

    return 0;
}