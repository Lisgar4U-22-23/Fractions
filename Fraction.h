#include <string>

class Fraction {
    public:
        Fraction();
        Fraction(int n, int d);

        int getNumerator();
        int getDenominator();
        void setNumerator(int n);
        void setDenominator(int d);

        static Fraction multiply(Fraction f1, Fraction f2);
        static Fraction divide(Fraction f1, Fraction f2);
        static Fraction add(Fraction f1, Fraction f2);
        static Fraction subtract(Fraction f1, Fraction f2);

        void multiply(Fraction f);
        void divide(Fraction f);
        void add(Fraction f);
        void subtract(Fraction f);

        void reciprocal();
        static Fraction reciprocal(Fraction f);

        double toDouble();
        string toFraction();
        string toString();
        bool equals(Fraction f);

    private:
        int numerator;
        int denominator;

        void reduce();
};
