//Определение подходящих типов
//Дано целое число. Требуется определить все подходящие для его хранения типы данных.
//
//Входные данные
//Входные данные содержат единственное целое число n (-2^64 <= n <= 2^64).
//
//Выходные данные
//Выведите все подходящие типы данных, в которых можно хранить число n. Если их несколько, то выводите каждый новый тип в отдельной строке. Типы данных следует выводить в том же порядке, что и в следующем списке:
//char
//unsigned char
//short int
//unsigned short int
//int
//unsigned int
//long long
//unsigned long long
//
//Sample Input 1:
//1000000000
//
//Sample Output 1:
//int
//unsigned int
//long long
//unsigned long long
//
//Sample Input 2:
//-113
//
//Sample Output 2:
//char
//short int
//int
//long long

#include <iostream>

using namespace std;

int main()
{
    long double n;
    cin >> n;

    if (n == (char) n)
        cout << "char\n";
    if (n == (unsigned char) n)
        cout << "unsigned char\n";
    if (n == (short int) n)
        cout << "short int\n";
    if (n == (unsigned short int) n)
        cout << "unsigned short int\n";
    if (n == (int) n)
        cout << "int\n";
    if (n == (unsigned int) n)
        cout << "unsigned int\n";
    if (n == (long long) n)
        cout << "long long\n";
    if (n == (unsigned long long) n)
        cout << "unsigned long long";
}