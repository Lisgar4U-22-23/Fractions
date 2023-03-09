#include <string>

Fraction::Fraction(){
    numerator = 0;
    denominator = 0;
}
Fraction::Fraction(int n, int d) {
    numerator = n;
    denominator = d;
}

int Fraction::getNumerator() {
    return numerator;
}
int Fraction::getDenominator() {
    return denominator;
}
void Fraction::setNumerator(int n) {
    numerator = n;
}
void Fraction::setDenominator(int d) {
    denominator = d;
}

Fraction Fraction::multiply(Fraction f1, Fraction f2) {
    Fraction out(
        f1.getNumerator() * f2.getNumerator(),
        f1.getDenominator() * f2.getDenominator()
    )
}
Fraction Fraction::divide(Fraction f1, Fraction f2) {
    Fraction out(
        f1.getNumerator() * f2.getDenominator(),
        f1.getDenominator() * f2.getNumerator()
    )
}
Fraction Fraction::add(Fraction f1, Fraction f2) {
    //TODO: IMPLEMENT THIS
}

