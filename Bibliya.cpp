#include "Bibliya.h"
#include <stdlib.h>
namespace Bibliya
{
    double Bibl::Plus(double a, double b)
    {
        return a + b;
    }
    double Bibl::Minus(double a, double b)
    {
        return a - b;
    }
    double Bibl::Multiply(double a, double b)
    {
        return a * b;
    }
    double Bibl::Divide(double a, double b)
    {
        return a / b;
    }
    double Bibl::AllPlus(double a, double b)
    {
        return Plus(a,b)+Minus(a,b)+Multiply(a,b)+Divide(a,b);
    }
    double Bibl::AllMultiply(double a, double b)
    {
        return Plus(a, b) * Minus(a, b) * Multiply(a, b) * Divide(a, b);
    }
    double Bibl::RandRange(int a, int b)
    {
        int x;
        x = rand();
        do {
            if (x < a or x > b) {
                x = rand();
            }
        } while (x < a or x > b);
        return x;
    }
}