#include "Decimal.h"

string Decimal::decToBin(int descimal)
{
    string r;
    while (descimal != 0) {
        r += (descimal % 2 == 0 ? "0" : "1");
        descimal /= 2;
    }

    return r;
}

string Decimal::decToHex(int decimal)
{
    return string();
}
