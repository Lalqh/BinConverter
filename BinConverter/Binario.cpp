#include "Binario.h"

int Binario::binToDec(char binario[])
{
    int decimal = 0;

    int multiplicador = 1;
    char caracterActual;

    for (int i = 0; i<strlen(binario); i++) {
        caracterActual = binario[i];
        if (caracterActual == '1') {
            decimal += multiplicador;
        }
        multiplicador = multiplicador * 2;
    }

    return decimal;
}

string Binario::binToHex(string bin)
{
    string b = bin + "";
    string sol = "";
    int numeroSeparaciones = bin.length() / 4;
    if (bin.length() % 4 > 0) {
        numeroSeparaciones++;
    }
    for (int var = bin.length(); var < numeroSeparaciones * 4; ++var) {
        b = "0" + b;
    }
    for (int var = 0; var < numeroSeparaciones; ++var) {
        sol += hexadecimal(b.substr((var * 4), 4));
    }
    return sol;
}

string Binario::hexadecimal(string num)
{
    if (num == "0000") {
        return "0";
    }
    else if (num == "0001") {
        return "1";
    }
    else if (num == "0010") {
        return "2";
    }
    else if (num == "0011") {
        return "3";
    }
    else if (num == "0100") {
        return "4";
    }
    else if (num == "0101") {
        return "5";
    }
    else if (num == "0110") {
        return "6";
    }
    else if (num == "0111") {
        return "7";
    }
    else if (num == "1000") {
        return "8";
    }
    else if (num == "1001") {
        return "9";
    }
    else if (num == "1010") {
        return "A";
    }
    else if (num == "1011") {
        return "B";
    }
    else if (num == "1100") {
        return "C";
    }
    else if (num == "1101") {
        return "D";
    }
    else if (num == "1110") {
        return "E";
    }
    else if (num == "1111") {
        return "F";
    }
    return 0;
}
