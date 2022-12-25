//Шестнадцатиричная система счисления
//В этой задаче требуется перевести число из шестнадцатиричной системы счисления в восьмеричную.
//
//Входные данные
//В первой строке записано единственное целое число n, записанное в шестнадцатиричной системе счисления.
//
//Выходные данные
//Выведите представление числа n в восьмеричной системе счисления без ведущих нулей.
//
//Sample Input 1:
//71
//
//Sample Output 1:
//161
//
//Sample Input 2:
//A
//
//Sample Output 2:
//12

#include <map>
#include <sstream>
#include <cstring>
#include <iostream>

using namespace std;

map<char, string> hex_to_bin = {
        { '0', "0000" },    { '1', "0001" },    { '2', "0010" },    { '3', "0011" },
        { '4', "0100" },    { '5', "0101" },    { '6', "0110" },    { '7', "0111" },
        { '8', "1000" },    { '9', "1001" },    { 'A', "1010" },    { 'B', "1011" },
        { 'C', "1100" },    { 'D', "1101" },    { 'E', "1110" },    { 'F', "1111" }
};

map<string, char> bin_to_oct = {
        { "000", '0' },    { "001", '1' },
        { "010", '2' },    { "011", '3' },
        { "100", '4' },    { "101", '5' },
        { "110", '6' },    { "111", '7' },
};

string hex_to_oct(const string &hex)
{
    stringstream ss;

    for (const char &c : hex)
        ss << hex_to_bin[c];
    string bin = ss.str();

    int size = bin.size();
    int mod3 = size % 3;
    bin = string(mod3 ? (3 - mod3) : 0, '0') + bin;

    ss.str("");
    for (int i = 0; i < bin.size(); i += 3)
        ss << bin_to_oct[bin.substr(i, 3)];
    string result = ss.str();

    if (result[0] == '0')
        return result.substr(1, result.size() - 1);
    else
        return result;
}

int main()
{
    string hex;
    getline(cin, hex);

    if (hex == "0")
        cout << hex;
    else
        cout << hex_to_oct(hex);
}